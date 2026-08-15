#pragma once
// IWYU pragma private; include "GlobalNamespace/EchoRemote.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EchoRemote)
namespace Dissonance::Audio::Playback {
class SamplePlaybackComponent;
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
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class PlayerVoicePlaybackControl;
}
namespace GlobalNamespace {
class VoicePlayer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class EchoRemote;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EchoRemote*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EchoRemote*, "", "EchoRemote");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EchoRemote
class CORDL_TYPE EchoRemote : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DissonanceSampleProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DissonanceSampleProvider, put=__cordl_internal_set_DissonanceSampleProvider)) ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  DissonanceSampleProvider;

/// @brief Field VoiceControl, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceControl, put=__cordl_internal_set_VoiceControl)) ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  VoiceControl;

/// @brief Field VoicePlayerClosePrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoicePlayerClosePrefab, put=__cordl_internal_set_VoicePlayerClosePrefab)) ::UnityW<::UnityEngine::GameObject>  VoicePlayerClosePrefab;

/// @brief Field VoicePlayerDirect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoicePlayerDirect, put=__cordl_internal_set_VoicePlayerDirect)) ::UnityW<::GlobalNamespace::VoicePlayer>  VoicePlayerDirect;

 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

/// @brief Field _distToLocal2D, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__distToLocal2D, put=__cordl_internal_set__distToLocal2D)) float_t  _distToLocal2D;

/// @brief Field _echoCloseVol, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__echoCloseVol, put=__cordl_internal_set__echoCloseVol)) ::GlobalNamespace::AudioVolume*  _echoCloseVol;

/// @brief Field _echoDirectVol, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__echoDirectVol, put=__cordl_internal_set__echoDirectVol)) ::GlobalNamespace::AudioVolume*  _echoDirectVol;

/// @brief Field _voicePlayerClose, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__voicePlayerClose, put=__cordl_internal_set__voicePlayerClose)) ::UnityW<::GlobalNamespace::VoicePlayer>  _voicePlayerClose;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr operator  ::GlobalNamespace::IAudioRTPCXProvider*() noexcept;

/// @brief Method Awake, addr 0x180333780, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetX, addr 0x180333850, size 0x20, virtual true, abstract: false, final true
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::EchoRemote* New_ctor() ;

/// @brief Method OnCloseEchoVoicePlayed, addr 0x180333870, size 0x50, virtual false, abstract: false, final false
inline void OnCloseEchoVoicePlayed(::GlobalNamespace::AudioSourceController*  asc) ;

/// @brief Method OnDirectEchoVoicePlayed, addr 0x1803338c0, size 0x50, virtual false, abstract: false, final false
inline void OnDirectEchoVoicePlayed(::GlobalNamespace::AudioSourceController*  asc) ;

/// @brief Method OnDisable, addr 0x180333910, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180333950, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x180333990, size 0x1f0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x180333b80, size 0x480, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent> const& __cordl_internal_get_DissonanceSampleProvider() const;

constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>& __cordl_internal_get_DissonanceSampleProvider() ;

constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> const& __cordl_internal_get_VoiceControl() const;

constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>& __cordl_internal_get_VoiceControl() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_VoicePlayerClosePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_VoicePlayerClosePrefab() ;

constexpr ::UnityW<::GlobalNamespace::VoicePlayer> const& __cordl_internal_get_VoicePlayerDirect() const;

constexpr ::UnityW<::GlobalNamespace::VoicePlayer>& __cordl_internal_get_VoicePlayerDirect() ;

constexpr float_t const& __cordl_internal_get__distToLocal2D() const;

constexpr float_t& __cordl_internal_get__distToLocal2D() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__echoCloseVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__echoCloseVol() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__echoDirectVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__echoDirectVol() ;

constexpr ::UnityW<::GlobalNamespace::VoicePlayer> const& __cordl_internal_get__voicePlayerClose() const;

constexpr ::UnityW<::GlobalNamespace::VoicePlayer>& __cordl_internal_get__voicePlayerClose() ;

constexpr void __cordl_internal_set_DissonanceSampleProvider(::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  value) ;

constexpr void __cordl_internal_set_VoiceControl(::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  value) ;

constexpr void __cordl_internal_set_VoicePlayerClosePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_VoicePlayerDirect(::UnityW<::GlobalNamespace::VoicePlayer>  value) ;

constexpr void __cordl_internal_set__distToLocal2D(float_t  value) ;

constexpr void __cordl_internal_set__echoCloseVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__echoDirectVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__voicePlayerClose(::UnityW<::GlobalNamespace::VoicePlayer>  value) ;

/// @brief Method .ctor, addr 0x180334000, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_XProviderIdentifier, addr 0x180334090, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_XProviderIdentifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* i___GlobalNamespace__IAudioRTPCXProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EchoRemote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EchoRemote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EchoRemote(EchoRemote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EchoRemote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EchoRemote(EchoRemote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4828};

/// @brief Field VoiceControl, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  ___VoiceControl;

/// @brief Field DissonanceSampleProvider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  ___DissonanceSampleProvider;

/// @brief Field VoicePlayerDirect, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VoicePlayer>  ___VoicePlayerDirect;

/// @brief Field VoicePlayerClosePrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___VoicePlayerClosePrefab;

/// @brief Field _echoDirectVol, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____echoDirectVol;

/// @brief Field _voicePlayerClose, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VoicePlayer>  ____voicePlayerClose;

/// @brief Field _echoCloseVol, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____echoCloseVol;

/// @brief Field _distToLocal2D, offset: 0x58, size: 0x4, def value: None
 float_t  ____distToLocal2D;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EchoRemote, ___VoiceControl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EchoRemote, ___DissonanceSampleProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EchoRemote, ___VoicePlayerDirect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EchoRemote, ___VoicePlayerClosePrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EchoRemote, ____echoDirectVol) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EchoRemote, ____voicePlayerClose) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EchoRemote, ____echoCloseVol) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EchoRemote, ____distToLocal2D) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EchoRemote) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

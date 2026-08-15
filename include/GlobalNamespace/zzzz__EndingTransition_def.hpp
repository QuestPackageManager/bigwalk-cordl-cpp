#pragma once
// IWYU pragma private; include "GlobalNamespace/EndingTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainMenuManager_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EndingTransition)
namespace GlobalNamespace {
class AudioRTPCXProvider;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class EndingTransition;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EndingTransition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EndingTransition*, "", "EndingTransition");
// Dependencies MainMenuManager::MainMenuEntryMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EndingTransition
class CORDL_TYPE EndingTransition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _transitionStartTime, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__transitionStartTime, put=__cordl_internal_set__transitionStartTime)) float_t  _transitionStartTime;

/// @brief Field alphaCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_alphaCurve, put=__cordl_internal_set_alphaCurve)) ::UnityEngine::AnimationCurve*  alphaCurve;

/// @brief Field duration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field entryMode, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_entryMode, put=__cordl_internal_set_entryMode)) ::GlobalNamespace::MainMenuManager_MainMenuEntryMode  entryMode;

/// @brief Field gameAudioFadeoutCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameAudioFadeoutCurve, put=__cordl_internal_set_gameAudioFadeoutCurve)) ::UnityEngine::AnimationCurve*  gameAudioFadeoutCurve;

/// @brief Field globalTextChatIsActive, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_globalTextChatIsActive, put=setStaticF_globalTextChatIsActive)) bool  globalTextChatIsActive;

/// @brief Field goodbyeMusicRTPCX, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_goodbyeMusicRTPCX, put=__cordl_internal_set_goodbyeMusicRTPCX)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  goodbyeMusicRTPCX;

/// @brief Field hudAlphaCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hudAlphaCurve, put=__cordl_internal_set_hudAlphaCurve)) ::UnityEngine::AnimationCurve*  hudAlphaCurve;

/// @brief Field menuAmbFadeinCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_menuAmbFadeinCurve, put=__cordl_internal_set_menuAmbFadeinCurve)) ::UnityEngine::AnimationCurve*  menuAmbFadeinCurve;

/// @brief Field musicFadeoutCurve, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicFadeoutCurve, put=__cordl_internal_set_musicFadeoutCurve)) ::UnityEngine::AnimationCurve*  musicFadeoutCurve;

/// @brief Field setMainMenuEntryMode, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_setMainMenuEntryMode, put=__cordl_internal_set_setMainMenuEntryMode)) bool  setMainMenuEntryMode;

/// @brief Field voiceFadeoutCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceFadeoutCurve, put=__cordl_internal_set_voiceFadeoutCurve)) ::UnityEngine::AnimationCurve*  voiceFadeoutCurve;

/// @brief Field voiceReverbLvlCurve, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceReverbLvlCurve, put=__cordl_internal_set_voiceReverbLvlCurve)) ::UnityEngine::AnimationCurve*  voiceReverbLvlCurve;

/// @brief Field voiceSpatialCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceSpatialCurve, put=__cordl_internal_set_voiceSpatialCurve)) ::UnityEngine::AnimationCurve*  voiceSpatialCurve;

/// @brief Field voiceWetFadeoutCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceWetFadeoutCurve, put=__cordl_internal_set_voiceWetFadeoutCurve)) ::UnityEngine::AnimationCurve*  voiceWetFadeoutCurve;

/// @brief Method AudioTransitionUpdate, addr 0x180431960, size 0x1f0, virtual false, abstract: false, final false
inline void AudioTransitionUpdate(float_t  normalizedTime) ;

static inline ::GlobalNamespace::EndingTransition* New_ctor() ;

/// @brief Method OnDisable, addr 0x180431b50, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTransitionEnd, addr 0x180431b80, size 0x190, virtual false, abstract: false, final false
inline void OnTransitionEnd() ;

/// @brief Method ResetAudio, addr 0x180431d10, size 0x140, virtual false, abstract: false, final false
inline void ResetAudio() ;

/// @brief Method SetActive, addr 0x180431e50, size 0x120, virtual false, abstract: false, final false
inline void SetActive() ;

/// @brief Method Update, addr 0x180431f80, size 0x2a0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <OnTransitionEnd>b__18_0, addr 0x180431f70, size 0x10, virtual false, abstract: false, final false
inline void _OnTransitionEnd_b__18_0(double_t  _) ;

constexpr float_t const& __cordl_internal_get__transitionStartTime() const;

constexpr float_t& __cordl_internal_get__transitionStartTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_alphaCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_alphaCurve() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode const& __cordl_internal_get_entryMode() const;

constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode& __cordl_internal_get_entryMode() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_gameAudioFadeoutCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_gameAudioFadeoutCurve() ;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& __cordl_internal_get_goodbyeMusicRTPCX() const;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& __cordl_internal_get_goodbyeMusicRTPCX() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_hudAlphaCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_hudAlphaCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_menuAmbFadeinCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_menuAmbFadeinCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_musicFadeoutCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_musicFadeoutCurve() ;

constexpr bool const& __cordl_internal_get_setMainMenuEntryMode() const;

constexpr bool& __cordl_internal_get_setMainMenuEntryMode() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_voiceFadeoutCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_voiceFadeoutCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_voiceReverbLvlCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_voiceReverbLvlCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_voiceSpatialCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_voiceSpatialCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_voiceWetFadeoutCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_voiceWetFadeoutCurve() ;

constexpr void __cordl_internal_set__transitionStartTime(float_t  value) ;

constexpr void __cordl_internal_set_alphaCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_entryMode(::GlobalNamespace::MainMenuManager_MainMenuEntryMode  value) ;

constexpr void __cordl_internal_set_gameAudioFadeoutCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_goodbyeMusicRTPCX(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value) ;

constexpr void __cordl_internal_set_hudAlphaCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_menuAmbFadeinCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_musicFadeoutCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_setMainMenuEntryMode(bool  value) ;

constexpr void __cordl_internal_set_voiceFadeoutCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_voiceReverbLvlCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_voiceSpatialCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_voiceWetFadeoutCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_globalTextChatIsActive() ;

static inline void setStaticF_globalTextChatIsActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EndingTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EndingTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EndingTransition(EndingTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndingTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndingTransition(EndingTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5248};

/// @brief Field duration, offset: 0x20, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field alphaCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___alphaCurve;

/// @brief Field hudAlphaCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___hudAlphaCurve;

/// @brief Field gameAudioFadeoutCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___gameAudioFadeoutCurve;

/// @brief Field menuAmbFadeinCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___menuAmbFadeinCurve;

/// @brief Field voiceSpatialCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___voiceSpatialCurve;

/// @brief Field voiceFadeoutCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___voiceFadeoutCurve;

/// @brief Field voiceWetFadeoutCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___voiceWetFadeoutCurve;

/// @brief Field voiceReverbLvlCurve, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___voiceReverbLvlCurve;

/// @brief Field musicFadeoutCurve, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___musicFadeoutCurve;

/// @brief Field _transitionStartTime, offset: 0x70, size: 0x4, def value: None
 float_t  ____transitionStartTime;

/// @brief Field goodbyeMusicRTPCX, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  ___goodbyeMusicRTPCX;

/// @brief Field setMainMenuEntryMode, offset: 0x80, size: 0x1, def value: None
 bool  ___setMainMenuEntryMode;

/// @brief Field entryMode, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::MainMenuManager_MainMenuEntryMode  ___entryMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EndingTransition, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___alphaCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___hudAlphaCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___gameAudioFadeoutCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___menuAmbFadeinCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___voiceSpatialCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___voiceFadeoutCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___voiceWetFadeoutCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___voiceReverbLvlCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___musicFadeoutCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ____transitionStartTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___goodbyeMusicRTPCX) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___setMainMenuEntryMode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndingTransition, ___entryMode) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EndingTransition) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace

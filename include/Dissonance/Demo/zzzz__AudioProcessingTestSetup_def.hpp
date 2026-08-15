#pragma once
// IWYU pragma private; include "Dissonance/Demo/AudioProcessingTestSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioProcessingTestSetup)
namespace Dissonance::Audio::Capture {
class WebRtcPreprocessingPipeline;
}
namespace Dissonance::VAD {
class IVoiceActivationListener;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Dropdown;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Dissonance::Demo {
class AudioProcessingTestSetup;
}
// Write type traits
MARK_REF_T(::Dissonance::Demo::AudioProcessingTestSetup*);
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::AudioProcessingTestSetup*, "Dissonance.Demo", "AudioProcessingTestSetup");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.AudioProcessingTestSetup
class CORDL_TYPE AudioProcessingTestSetup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BackgroundSoundRemoval, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_BackgroundSoundRemoval, put=__cordl_internal_set_BackgroundSoundRemoval)) ::UnityW<::UnityEngine::UI::Toggle>  BackgroundSoundRemoval;

/// @brief Field BackgroundSoundRemovalSlider, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_BackgroundSoundRemovalSlider, put=__cordl_internal_set_BackgroundSoundRemovalSlider)) ::UnityW<::UnityEngine::UI::Slider>  BackgroundSoundRemovalSlider;

/// @brief Field Clips, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Clips, put=__cordl_internal_set_Clips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  Clips;

/// @brief Field ClipsDropdown, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClipsDropdown, put=__cordl_internal_set_ClipsDropdown)) ::UnityW<::UnityEngine::UI::Dropdown>  ClipsDropdown;

/// @brief Field InputVolumeSlider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InputVolumeSlider, put=__cordl_internal_set_InputVolumeSlider)) ::UnityW<::UnityEngine::UI::Slider>  InputVolumeSlider;

/// @brief Field NoiseSuppressionDropdown, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_NoiseSuppressionDropdown, put=__cordl_internal_set_NoiseSuppressionDropdown)) ::UnityW<::UnityEngine::UI::Dropdown>  NoiseSuppressionDropdown;

/// @brief Field OutputCutoffSlider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutputCutoffSlider, put=__cordl_internal_set_OutputCutoffSlider)) ::UnityW<::UnityEngine::UI::Slider>  OutputCutoffSlider;

/// @brief Field OutputVolumeSlider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutputVolumeSlider, put=__cordl_internal_set_OutputVolumeSlider)) ::UnityW<::UnityEngine::UI::Slider>  OutputVolumeSlider;

/// @brief Field PlayPauseButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayPauseButton, put=__cordl_internal_set_PlayPauseButton)) ::UnityW<::UnityEngine::UI::Button>  PlayPauseButton;

/// @brief Field VadSensitivityDropdown, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_VadSensitivityDropdown, put=__cordl_internal_set_VadSensitivityDropdown)) ::UnityW<::UnityEngine::UI::Dropdown>  VadSensitivityDropdown;

/// @brief Field VoiceIndicator, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceIndicator, put=__cordl_internal_set_VoiceIndicator)) ::UnityW<::UnityEngine::UI::Text>  VoiceIndicator;

/// @brief Field _buffer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<float_t>  _buffer;

/// @brief Field _clip, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__clip, put=__cordl_internal_set__clip)) ::UnityW<::UnityEngine::AudioClip>  _clip;

/// @brief Field _enabled, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _pendingSamples, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__pendingSamples, put=__cordl_internal_set__pendingSamples)) float_t  _pendingSamples;

/// @brief Field _preprocessor, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__preprocessor, put=__cordl_internal_set__preprocessor)) ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*  _preprocessor;

/// @brief Field _readHead, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__readHead, put=__cordl_internal_set__readHead)) int32_t  _readHead;

/// @brief Field _reading, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__reading, put=__cordl_internal_set__reading)) bool  _reading;

/// @brief Field _vad, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__vad, put=__cordl_internal_set__vad)) bool  _vad;

/// @brief Convert operator to "::Dissonance::VAD::IVoiceActivationListener"
constexpr operator  ::Dissonance::VAD::IVoiceActivationListener*() noexcept;

/// @brief Method ChangeAudioClip, addr 0x1805c3470, size 0x2c0, virtual false, abstract: false, final false
inline void ChangeAudioClip(::UnityEngine::AudioClip*  clip) ;

/// @brief Method GetGains, addr 0x1805c3730, size 0x20, virtual false, abstract: false, final false
inline int32_t GetGains(::ArrayW<float_t>  output) ;

static inline ::Dissonance::Demo::AudioProcessingTestSetup* New_ctor() ;

/// @brief Method OnAudioSelectionChanged, addr 0x1805c3750, size 0x80, virtual false, abstract: false, final false
inline void OnAudioSelectionChanged() ;

/// @brief Method OnBackgroundSoundRemovalChanged, addr 0x1805c37d0, size 0x90, virtual false, abstract: false, final false
inline void OnBackgroundSoundRemovalChanged() ;

/// @brief Method OnDestroy, addr 0x1805c3860, size 0x30, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1805c3890, size 0x590, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLowPassCutoffChanged, addr 0x1805c3e20, size 0x70, virtual false, abstract: false, final false
inline void OnLowPassCutoffChanged(float_t  _) ;

/// @brief Method OnNoiseSuppressionChanged, addr 0x1805c3e90, size 0xe0, virtual false, abstract: false, final false
inline void OnNoiseSuppressionChanged() ;

/// @brief Method OnPlayPauseClicked, addr 0x1805c3f70, size 0x70, virtual false, abstract: false, final false
inline void OnPlayPauseClicked() ;

/// @brief Method OnVadSensitivityChanged, addr 0x1805c3fe0, size 0xe0, virtual false, abstract: false, final false
inline void OnVadSensitivityChanged() ;

/// @brief Method OnVolumeChanged, addr 0x1805c40c0, size 0x60, virtual false, abstract: false, final false
inline void OnVolumeChanged(float_t  _) ;

/// @brief Method ProcessSamples, addr 0x1805c4120, size 0x110, virtual false, abstract: false, final false
inline void ProcessSamples(::ArrayW<float_t>  floats) ;

/// @brief Method Update, addr 0x1805c4230, size 0x210, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method VoiceActivationStart, addr 0x1805c4440, size 0x10, virtual true, abstract: false, final true
inline void VoiceActivationStart() ;

/// @brief Method VoiceActivationStop, addr 0x1805c4450, size 0x10, virtual true, abstract: false, final true
inline void VoiceActivationStop() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_BackgroundSoundRemoval() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_BackgroundSoundRemoval() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_BackgroundSoundRemovalSlider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_BackgroundSoundRemovalSlider() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_Clips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_Clips() ;

constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get_ClipsDropdown() const;

constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get_ClipsDropdown() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_InputVolumeSlider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_InputVolumeSlider() ;

constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get_NoiseSuppressionDropdown() const;

constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get_NoiseSuppressionDropdown() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_OutputCutoffSlider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_OutputCutoffSlider() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_OutputVolumeSlider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_OutputVolumeSlider() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_PlayPauseButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_PlayPauseButton() ;

constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get_VadSensitivityDropdown() const;

constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get_VadSensitivityDropdown() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_VoiceIndicator() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_VoiceIndicator() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__buffer() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__clip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__clip() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr float_t const& __cordl_internal_get__pendingSamples() const;

constexpr float_t& __cordl_internal_get__pendingSamples() ;

constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline* const& __cordl_internal_get__preprocessor() const;

constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*& __cordl_internal_get__preprocessor() ;

constexpr int32_t const& __cordl_internal_get__readHead() const;

constexpr int32_t& __cordl_internal_get__readHead() ;

constexpr bool const& __cordl_internal_get__reading() const;

constexpr bool& __cordl_internal_get__reading() ;

constexpr bool const& __cordl_internal_get__vad() const;

constexpr bool& __cordl_internal_get__vad() ;

constexpr void __cordl_internal_set_BackgroundSoundRemoval(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set_BackgroundSoundRemovalSlider(::UnityW<::UnityEngine::UI::Slider>  value) ;

constexpr void __cordl_internal_set_Clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_ClipsDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value) ;

constexpr void __cordl_internal_set_InputVolumeSlider(::UnityW<::UnityEngine::UI::Slider>  value) ;

constexpr void __cordl_internal_set_NoiseSuppressionDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value) ;

constexpr void __cordl_internal_set_OutputCutoffSlider(::UnityW<::UnityEngine::UI::Slider>  value) ;

constexpr void __cordl_internal_set_OutputVolumeSlider(::UnityW<::UnityEngine::UI::Slider>  value) ;

constexpr void __cordl_internal_set_PlayPauseButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_VadSensitivityDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value) ;

constexpr void __cordl_internal_set_VoiceIndicator(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__buffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__clip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__pendingSamples(float_t  value) ;

constexpr void __cordl_internal_set__preprocessor(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*  value) ;

constexpr void __cordl_internal_set__readHead(int32_t  value) ;

constexpr void __cordl_internal_set__reading(bool  value) ;

constexpr void __cordl_internal_set__vad(bool  value) ;

/// @brief Method .ctor, addr 0x1805c4460, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Dissonance::VAD::IVoiceActivationListener"
constexpr ::Dissonance::VAD::IVoiceActivationListener* i___Dissonance__VAD__IVoiceActivationListener() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioProcessingTestSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioProcessingTestSetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioProcessingTestSetup(AudioProcessingTestSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioProcessingTestSetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioProcessingTestSetup(AudioProcessingTestSetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16842};

/// @brief Field InputVolumeSlider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ___InputVolumeSlider;

/// @brief Field OutputVolumeSlider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ___OutputVolumeSlider;

/// @brief Field OutputCutoffSlider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ___OutputCutoffSlider;

/// @brief Field PlayPauseButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___PlayPauseButton;

/// @brief Field ClipsDropdown, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Dropdown>  ___ClipsDropdown;

/// @brief Field NoiseSuppressionDropdown, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Dropdown>  ___NoiseSuppressionDropdown;

/// @brief Field VadSensitivityDropdown, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Dropdown>  ___VadSensitivityDropdown;

/// @brief Field VoiceIndicator, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___VoiceIndicator;

/// @brief Field BackgroundSoundRemoval, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ___BackgroundSoundRemoval;

/// @brief Field BackgroundSoundRemovalSlider, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ___BackgroundSoundRemovalSlider;

/// @brief Field Clips, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___Clips;

/// @brief Field _preprocessor, offset: 0x78, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*  ____preprocessor;

/// @brief Field _enabled, offset: 0x80, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _reading, offset: 0x81, size: 0x1, def value: None
 bool  ____reading;

/// @brief Field _pendingSamples, offset: 0x84, size: 0x4, def value: None
 float_t  ____pendingSamples;

/// @brief Field _readHead, offset: 0x88, size: 0x4, def value: None
 int32_t  ____readHead;

/// @brief Field _clip, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____clip;

/// @brief Field _buffer, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<float_t>  ____buffer;

/// @brief Field _vad, offset: 0xa0, size: 0x1, def value: None
 bool  ____vad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___InputVolumeSlider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___OutputVolumeSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___OutputCutoffSlider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___PlayPauseButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___ClipsDropdown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___NoiseSuppressionDropdown) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___VadSensitivityDropdown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___VoiceIndicator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___BackgroundSoundRemoval) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___BackgroundSoundRemovalSlider) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ___Clips) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ____preprocessor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ____enabled) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ____reading) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ____pendingSamples) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ____readHead) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ____clip) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ____buffer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingTestSetup, ____vad) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::AudioProcessingTestSetup) == 0xa8, "Size mismatch!");

} // namespace end def Dissonance::Demo

#pragma once
// IWYU pragma private; include "Dissonance/Demo/AudioProcessingTestSetup.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/Demo/zzzz__AudioProcessingTestSetup_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__WebRtcPreprocessingPipeline_def.hpp"
#include "Dissonance/VAD/zzzz__IVoiceActivationListener_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::OnEnable)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x1805c3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::Update)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1805c4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)(::ArrayW<float_t>)>(&::Dissonance::Demo::AudioProcessingTestSetup::ProcessSamples)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805c4120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"ProcessSamples", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.OnAudioSelectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::OnAudioSelectionChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c3750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnAudioSelectionChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.OnVolumeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)(float_t)>(&::Dissonance::Demo::AudioProcessingTestSetup::OnVolumeChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805c40c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnVolumeChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.OnLowPassCutoffChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)(float_t)>(&::Dissonance::Demo::AudioProcessingTestSetup::OnLowPassCutoffChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c3e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnLowPassCutoffChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.OnPlayPauseClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::OnPlayPauseClicked)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c3f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnPlayPauseClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.OnNoiseSuppressionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::OnNoiseSuppressionChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805c3e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnNoiseSuppressionChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.OnVadSensitivityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::OnVadSensitivityChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805c3fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnVadSensitivityChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.OnBackgroundSoundRemovalChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::OnBackgroundSoundRemovalChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805c37d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnBackgroundSoundRemovalChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.ChangeAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)(::UnityEngine::AudioClip*)>(&::Dissonance::Demo::AudioProcessingTestSetup::ChangeAudioClip)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1805c3470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"ChangeAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c3860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.VoiceActivationStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::VoiceActivationStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c4440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"VoiceActivationStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.VoiceActivationStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::VoiceActivationStop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c4450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"VoiceActivationStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup.GetGains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Demo::AudioProcessingTestSetup::*)(::ArrayW<float_t>)>(&::Dissonance::Demo::AudioProcessingTestSetup::GetGains)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c3730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"GetGains", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingTestSetup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingTestSetup::*)()>(&::Dissonance::Demo::AudioProcessingTestSetup::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c4460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Slider>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_InputVolumeSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputVolumeSlider;
}
constexpr ::UnityW<::UnityEngine::UI::Slider> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_InputVolumeSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputVolumeSlider;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_InputVolumeSlider(::UnityW<::UnityEngine::UI::Slider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputVolumeSlider = value;
}
constexpr ::UnityW<::UnityEngine::UI::Slider>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_OutputVolumeSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputVolumeSlider;
}
constexpr ::UnityW<::UnityEngine::UI::Slider> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_OutputVolumeSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputVolumeSlider;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_OutputVolumeSlider(::UnityW<::UnityEngine::UI::Slider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutputVolumeSlider = value;
}
constexpr ::UnityW<::UnityEngine::UI::Slider>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_OutputCutoffSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputCutoffSlider;
}
constexpr ::UnityW<::UnityEngine::UI::Slider> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_OutputCutoffSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputCutoffSlider;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_OutputCutoffSlider(::UnityW<::UnityEngine::UI::Slider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutputCutoffSlider = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_PlayPauseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayPauseButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_PlayPauseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayPauseButton;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_PlayPauseButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayPauseButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_ClipsDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClipsDropdown;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_ClipsDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClipsDropdown;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_ClipsDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClipsDropdown = value;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_NoiseSuppressionDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoiseSuppressionDropdown;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_NoiseSuppressionDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoiseSuppressionDropdown;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_NoiseSuppressionDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoiseSuppressionDropdown = value;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_VadSensitivityDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VadSensitivityDropdown;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_VadSensitivityDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VadSensitivityDropdown;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_VadSensitivityDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VadSensitivityDropdown = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_VoiceIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceIndicator;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_VoiceIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceIndicator;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_VoiceIndicator(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoiceIndicator = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_BackgroundSoundRemoval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackgroundSoundRemoval;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_BackgroundSoundRemoval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackgroundSoundRemoval;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_BackgroundSoundRemoval(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BackgroundSoundRemoval = value;
}
constexpr ::UnityW<::UnityEngine::UI::Slider>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_BackgroundSoundRemovalSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackgroundSoundRemovalSlider;
}
constexpr ::UnityW<::UnityEngine::UI::Slider> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_BackgroundSoundRemovalSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackgroundSoundRemovalSlider;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_BackgroundSoundRemovalSlider(::UnityW<::UnityEngine::UI::Slider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BackgroundSoundRemovalSlider = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_Clips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Clips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get_Clips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Clips;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set_Clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Clips = value;
}
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__preprocessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preprocessor;
}
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline* const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__preprocessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preprocessor;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set__preprocessor(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preprocessor = value;
}
constexpr bool& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr bool& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__reading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reading;
}
constexpr bool const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__reading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reading;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set__reading(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reading = value;
}
constexpr float_t& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__pendingSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingSamples;
}
constexpr float_t const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__pendingSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingSamples;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set__pendingSamples(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingSamples = value;
}
constexpr int32_t& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__readHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readHead;
}
constexpr int32_t const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__readHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readHead;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set__readHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readHead = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clip;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set__clip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clip = value;
}
constexpr ::ArrayW<float_t>& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<float_t> const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set__buffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr bool& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__vad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vad;
}
constexpr bool const& Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_get__vad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vad;
}
constexpr void Dissonance::Demo::AudioProcessingTestSetup::__cordl_internal_set__vad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vad = value;
}
inline void Dissonance::Demo::AudioProcessingTestSetup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::ProcessSamples(::ArrayW<float_t>  floats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"ProcessSamples", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, floats);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::OnAudioSelectionChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnAudioSelectionChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::OnVolumeChanged(float_t  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnVolumeChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::OnLowPassCutoffChanged(float_t  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnLowPassCutoffChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::OnPlayPauseClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnPlayPauseClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::OnNoiseSuppressionChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnNoiseSuppressionChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::OnVadSensitivityChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnVadSensitivityChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::OnBackgroundSoundRemovalChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnBackgroundSoundRemovalChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::ChangeAudioClip(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"ChangeAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::VoiceActivationStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"VoiceActivationStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::VoiceActivationStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"VoiceActivationStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Dissonance::Demo::AudioProcessingTestSetup::GetGains(::ArrayW<float_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {"GetGains", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output);
}
inline void Dissonance::Demo::AudioProcessingTestSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingTestSetup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Demo::AudioProcessingTestSetup* Dissonance::Demo::AudioProcessingTestSetup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::AudioProcessingTestSetup*>());
}
/// @brief Convert operator to "::Dissonance::VAD::IVoiceActivationListener"
constexpr  Dissonance::Demo::AudioProcessingTestSetup::operator ::Dissonance::VAD::IVoiceActivationListener*() noexcept {
return static_cast<::Dissonance::VAD::IVoiceActivationListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::VAD::IVoiceActivationListener"
constexpr ::Dissonance::VAD::IVoiceActivationListener* Dissonance::Demo::AudioProcessingTestSetup::i___Dissonance__VAD__IVoiceActivationListener() noexcept {
return static_cast<::Dissonance::VAD::IVoiceActivationListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::AudioProcessingTestSetup::AudioProcessingTestSetup()   {
}

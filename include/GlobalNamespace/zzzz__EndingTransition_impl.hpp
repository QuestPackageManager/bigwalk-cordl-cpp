#pragma once
// IWYU pragma private; include "GlobalNamespace/EndingTransition.hpp"
#include "GlobalNamespace/zzzz__MainMenuManager_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EndingTransition_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EndingTransition.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingTransition::*)()>(&::GlobalNamespace::EndingTransition::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180431b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndingTransition.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingTransition::*)()>(&::GlobalNamespace::EndingTransition::SetActive)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180431e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"SetActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndingTransition.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingTransition::*)()>(&::GlobalNamespace::EndingTransition::Update)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x180431f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndingTransition.OnTransitionEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingTransition::*)()>(&::GlobalNamespace::EndingTransition::OnTransitionEnd)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180431b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"OnTransitionEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndingTransition.ResetAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingTransition::*)()>(&::GlobalNamespace::EndingTransition::ResetAudio)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180431d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"ResetAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndingTransition.AudioTransitionUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingTransition::*)(float_t)>(&::GlobalNamespace::EndingTransition::AudioTransitionUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180431960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"AudioTransitionUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndingTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingTransition::*)()>(&::GlobalNamespace::EndingTransition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndingTransition._OnTransitionEnd_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingTransition::*)(double_t)>(&::GlobalNamespace::EndingTransition::_OnTransitionEnd_b__18_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180431f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"<OnTransitionEnd>b__18_0", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::EndingTransition::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::EndingTransition::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EndingTransition::__cordl_internal_get_alphaCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EndingTransition::__cordl_internal_get_alphaCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaCurve;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_alphaCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alphaCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EndingTransition::__cordl_internal_get_hudAlphaCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hudAlphaCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EndingTransition::__cordl_internal_get_hudAlphaCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hudAlphaCurve;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_hudAlphaCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hudAlphaCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EndingTransition::__cordl_internal_get_gameAudioFadeoutCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAudioFadeoutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EndingTransition::__cordl_internal_get_gameAudioFadeoutCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAudioFadeoutCurve;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_gameAudioFadeoutCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameAudioFadeoutCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EndingTransition::__cordl_internal_get_menuAmbFadeinCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuAmbFadeinCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EndingTransition::__cordl_internal_get_menuAmbFadeinCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuAmbFadeinCurve;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_menuAmbFadeinCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menuAmbFadeinCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EndingTransition::__cordl_internal_get_voiceSpatialCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSpatialCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EndingTransition::__cordl_internal_get_voiceSpatialCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSpatialCurve;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_voiceSpatialCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceSpatialCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EndingTransition::__cordl_internal_get_voiceFadeoutCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceFadeoutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EndingTransition::__cordl_internal_get_voiceFadeoutCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceFadeoutCurve;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_voiceFadeoutCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceFadeoutCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EndingTransition::__cordl_internal_get_voiceWetFadeoutCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceWetFadeoutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EndingTransition::__cordl_internal_get_voiceWetFadeoutCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceWetFadeoutCurve;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_voiceWetFadeoutCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceWetFadeoutCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EndingTransition::__cordl_internal_get_voiceReverbLvlCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceReverbLvlCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EndingTransition::__cordl_internal_get_voiceReverbLvlCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceReverbLvlCurve;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_voiceReverbLvlCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceReverbLvlCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EndingTransition::__cordl_internal_get_musicFadeoutCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicFadeoutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EndingTransition::__cordl_internal_get_musicFadeoutCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicFadeoutCurve;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_musicFadeoutCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicFadeoutCurve = value;
}
constexpr float_t& GlobalNamespace::EndingTransition::__cordl_internal_get__transitionStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionStartTime;
}
constexpr float_t const& GlobalNamespace::EndingTransition::__cordl_internal_get__transitionStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionStartTime;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set__transitionStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionStartTime = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& GlobalNamespace::EndingTransition::__cordl_internal_get_goodbyeMusicRTPCX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodbyeMusicRTPCX;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& GlobalNamespace::EndingTransition::__cordl_internal_get_goodbyeMusicRTPCX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodbyeMusicRTPCX;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_goodbyeMusicRTPCX(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goodbyeMusicRTPCX = value;
}
constexpr bool& GlobalNamespace::EndingTransition::__cordl_internal_get_setMainMenuEntryMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setMainMenuEntryMode;
}
constexpr bool const& GlobalNamespace::EndingTransition::__cordl_internal_get_setMainMenuEntryMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setMainMenuEntryMode;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_setMainMenuEntryMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setMainMenuEntryMode = value;
}
constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode& GlobalNamespace::EndingTransition::__cordl_internal_get_entryMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryMode;
}
constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode const& GlobalNamespace::EndingTransition::__cordl_internal_get_entryMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryMode;
}
constexpr void GlobalNamespace::EndingTransition::__cordl_internal_set_entryMode(::GlobalNamespace::MainMenuManager_MainMenuEntryMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryMode = value;
}
inline void GlobalNamespace::EndingTransition::setStaticF_globalTextChatIsActive(bool  value)  {
::cordl_internals::setStaticField<bool, "globalTextChatIsActive", ::GlobalNamespace::EndingTransition*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::EndingTransition::getStaticF_globalTextChatIsActive()  {
return ::cordl_internals::getStaticField<bool, "globalTextChatIsActive", ::GlobalNamespace::EndingTransition*>();
}
inline void GlobalNamespace::EndingTransition::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EndingTransition::SetActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"SetActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EndingTransition::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EndingTransition::OnTransitionEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"OnTransitionEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EndingTransition::ResetAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"ResetAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EndingTransition::AudioTransitionUpdate(float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"AudioTransitionUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normalizedTime);
}
inline void GlobalNamespace::EndingTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EndingTransition::_OnTransitionEnd_b__18_0(double_t  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingTransition*>(),
                        {"<OnTransitionEnd>b__18_0", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::EndingTransition* GlobalNamespace::EndingTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EndingTransition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EndingTransition::EndingTransition()   {
}

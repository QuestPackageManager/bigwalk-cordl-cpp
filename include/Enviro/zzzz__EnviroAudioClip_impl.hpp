#pragma once
// IWYU pragma private; include "Enviro/EnviroAudioClip.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroAudioClip_def.hpp"
#include "Enviro/zzzz__EnviroAudioClip_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroAudioClip_PlayBackType::EnviroAudioClip_PlayBackType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroAudioClip_PlayBackType::EnviroAudioClip_PlayBackType()   {
}
constexpr ::Enviro::EnviroAudioClip_PlayBackType  Enviro::EnviroAudioClip_PlayBackType::Always{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroAudioClip_PlayBackType  Enviro::EnviroAudioClip_PlayBackType::BasedOnSun{static_cast<int32_t>(0x1)};
constexpr ::Enviro::EnviroAudioClip_PlayBackType  Enviro::EnviroAudioClip_PlayBackType::BasedOnMoon{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Enviro::EnviroAudioClip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioClip::*)()>(&::Enviro::EnviroAudioClip::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805fc450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioClip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroAudioClip::__cordl_internal_get_showEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr bool const& Enviro::EnviroAudioClip::__cordl_internal_get_showEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_showEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEditor = value;
}
constexpr ::StringW& Enviro::EnviroAudioClip::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Enviro::EnviroAudioClip::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Enviro::EnviroAudioClip::__cordl_internal_get_audioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Enviro::EnviroAudioClip::__cordl_internal_get_audioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClip = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& Enviro::EnviroAudioClip::__cordl_internal_get_audioMixerGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioMixerGroup;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& Enviro::EnviroAudioClip::__cordl_internal_get_audioMixerGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioMixerGroup;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_audioMixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioMixerGroup = value;
}
constexpr ::Enviro::EnviroAudioClip_PlayBackType& Enviro::EnviroAudioClip::__cordl_internal_get_playBackType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playBackType;
}
constexpr ::Enviro::EnviroAudioClip_PlayBackType const& Enviro::EnviroAudioClip::__cordl_internal_get_playBackType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playBackType;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_playBackType(::Enviro::EnviroAudioClip_PlayBackType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playBackType = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& Enviro::EnviroAudioClip::__cordl_internal_get_myAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Enviro::EnviroAudioClip::__cordl_internal_get_myAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myAudioSource;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_myAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myAudioSource = value;
}
constexpr bool& Enviro::EnviroAudioClip::__cordl_internal_get_loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr bool const& Enviro::EnviroAudioClip::__cordl_internal_get_loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop = value;
}
constexpr float_t& Enviro::EnviroAudioClip::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr float_t const& Enviro::EnviroAudioClip::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroAudioClip::__cordl_internal_get_volumeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroAudioClip::__cordl_internal_get_volumeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeCurve;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_volumeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumeCurve = value;
}
constexpr float_t& Enviro::EnviroAudioClip::__cordl_internal_get_maxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr float_t const& Enviro::EnviroAudioClip::__cordl_internal_get_maxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr void Enviro::EnviroAudioClip::__cordl_internal_set_maxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVolume = value;
}
inline void Enviro::EnviroAudioClip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioClip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroAudioClip* Enviro::EnviroAudioClip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroAudioClip*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroAudioClip::EnviroAudioClip()   {
}

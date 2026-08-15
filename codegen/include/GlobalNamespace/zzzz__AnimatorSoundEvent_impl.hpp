#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorSoundEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AnimatorSoundEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimatorSoundEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorSoundEvent::*)()>(&::GlobalNamespace::AnimatorSoundEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046d250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorSoundEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_Sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_Sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr void GlobalNamespace::AnimatorSoundEvent::__cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sound = value;
}
constexpr float_t& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_Probability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Probability;
}
constexpr float_t const& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_Probability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Probability;
}
constexpr void GlobalNamespace::AnimatorSoundEvent::__cordl_internal_set_Probability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Probability = value;
}
constexpr float_t& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_PlayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayTime;
}
constexpr float_t const& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_PlayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayTime;
}
constexpr void GlobalNamespace::AnimatorSoundEvent::__cordl_internal_set_PlayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayTime = value;
}
constexpr float_t& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_StopTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopTime;
}
constexpr float_t const& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_StopTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopTime;
}
constexpr void GlobalNamespace::AnimatorSoundEvent::__cordl_internal_set_StopTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopTime = value;
}
constexpr ::StringW& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_AudioTransformName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransformName;
}
constexpr ::StringW const& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_AudioTransformName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransformName;
}
constexpr void GlobalNamespace::AnimatorSoundEvent::__cordl_internal_set_AudioTransformName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioTransformName = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_AudioTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_AudioTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransform;
}
constexpr void GlobalNamespace::AnimatorSoundEvent::__cordl_internal_set_AudioTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_Asc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asc;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_Asc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asc;
}
constexpr void GlobalNamespace::AnimatorSoundEvent::__cordl_internal_set_Asc(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Asc = value;
}
constexpr bool& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_Played()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Played;
}
constexpr bool const& GlobalNamespace::AnimatorSoundEvent::__cordl_internal_get_Played() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Played;
}
constexpr void GlobalNamespace::AnimatorSoundEvent::__cordl_internal_set_Played(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Played = value;
}
inline void GlobalNamespace::AnimatorSoundEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorSoundEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimatorSoundEvent* GlobalNamespace::AnimatorSoundEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimatorSoundEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatorSoundEvent::AnimatorSoundEvent()   {
}

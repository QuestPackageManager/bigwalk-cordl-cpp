#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicReactiveLight.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_impl.hpp"
#include "UnityEngine/zzzz__Light_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicReactiveLight_def.hpp"
#include "GlobalNamespace/zzzz__MusicPlayer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicReactiveLight.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicReactiveLight::*)()>(&::GlobalNamespace::MusicReactiveLight::Update)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180405210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicReactiveLight*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicReactiveLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicReactiveLight::*)()>(&::GlobalNamespace::MusicReactiveLight::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicReactiveLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MusicPlayer>& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_musicPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicPlayer;
}
constexpr ::UnityW<::GlobalNamespace::MusicPlayer> const& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_musicPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicPlayer;
}
constexpr void GlobalNamespace::MusicReactiveLight::__cordl_internal_set_musicPlayer(::UnityW<::GlobalNamespace::MusicPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicPlayer = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_amplitudeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitudeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_amplitudeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitudeCurve;
}
constexpr void GlobalNamespace::MusicReactiveLight::__cordl_internal_set_amplitudeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amplitudeCurve = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Light>>& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_lights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Light>> const& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_lights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr void GlobalNamespace::MusicReactiveLight::__cordl_internal_set_lights(::ArrayW<::UnityW<::UnityEngine::Light>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lights = value;
}
constexpr float_t& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_minIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minIntensity;
}
constexpr float_t const& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_minIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minIntensity;
}
constexpr void GlobalNamespace::MusicReactiveLight::__cordl_internal_set_minIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minIntensity = value;
}
constexpr float_t& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_maxIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxIntensity;
}
constexpr float_t const& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_maxIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxIntensity;
}
constexpr void GlobalNamespace::MusicReactiveLight::__cordl_internal_set_maxIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxIntensity = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_propertyHelpers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyHelpers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>> const& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_propertyHelpers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyHelpers;
}
constexpr void GlobalNamespace::MusicReactiveLight::__cordl_internal_set_propertyHelpers(::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyHelpers = value;
}
constexpr ::StringW& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr void GlobalNamespace::MusicReactiveLight::__cordl_internal_set_propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyName = value;
}
constexpr float_t& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_minPropertyValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPropertyValue;
}
constexpr float_t const& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_minPropertyValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPropertyValue;
}
constexpr void GlobalNamespace::MusicReactiveLight::__cordl_internal_set_minPropertyValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minPropertyValue = value;
}
constexpr float_t& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_maxPropertyValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPropertyValue;
}
constexpr float_t const& GlobalNamespace::MusicReactiveLight::__cordl_internal_get_maxPropertyValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPropertyValue;
}
constexpr void GlobalNamespace::MusicReactiveLight::__cordl_internal_set_maxPropertyValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPropertyValue = value;
}
inline void GlobalNamespace::MusicReactiveLight::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicReactiveLight*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicReactiveLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicReactiveLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MusicReactiveLight* GlobalNamespace::MusicReactiveLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicReactiveLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicReactiveLight::MusicReactiveLight()   {
}

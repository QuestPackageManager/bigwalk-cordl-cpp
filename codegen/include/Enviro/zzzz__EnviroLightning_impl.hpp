#pragma once
// IWYU pragma private; include "Enviro/EnviroLightning.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroLightning_def.hpp"
#include "Enviro/zzzz__Lightning_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroLightning._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightning::*)()>(&::Enviro::EnviroLightning::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180615b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightning*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Enviro::Lightning>& Enviro::EnviroLightning::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::Enviro::Lightning> const& Enviro::EnviroLightning::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void Enviro::EnviroLightning::__cordl_internal_set_prefab(::UnityW<::Enviro::Lightning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::EnviroLightning::__cordl_internal_get_customLightningEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customLightningEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::EnviroLightning::__cordl_internal_get_customLightningEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customLightningEffect;
}
constexpr void Enviro::EnviroLightning::__cordl_internal_set_customLightningEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customLightningEffect = value;
}
constexpr bool& Enviro::EnviroLightning::__cordl_internal_get_lightningStorm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningStorm;
}
constexpr bool const& Enviro::EnviroLightning::__cordl_internal_get_lightningStorm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningStorm;
}
constexpr void Enviro::EnviroLightning::__cordl_internal_set_lightningStorm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightningStorm = value;
}
constexpr float_t& Enviro::EnviroLightning::__cordl_internal_get_randomLightingDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomLightingDelay;
}
constexpr float_t const& Enviro::EnviroLightning::__cordl_internal_get_randomLightingDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomLightingDelay;
}
constexpr void Enviro::EnviroLightning::__cordl_internal_set_randomLightingDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomLightingDelay = value;
}
constexpr float_t& Enviro::EnviroLightning::__cordl_internal_get_randomSpawnRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomSpawnRange;
}
constexpr float_t const& Enviro::EnviroLightning::__cordl_internal_get_randomSpawnRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomSpawnRange;
}
constexpr void Enviro::EnviroLightning::__cordl_internal_set_randomSpawnRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomSpawnRange = value;
}
constexpr float_t& Enviro::EnviroLightning::__cordl_internal_get_randomTargetRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomTargetRange;
}
constexpr float_t const& Enviro::EnviroLightning::__cordl_internal_get_randomTargetRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomTargetRange;
}
constexpr void Enviro::EnviroLightning::__cordl_internal_set_randomTargetRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomTargetRange = value;
}
constexpr float_t& Enviro::EnviroLightning::__cordl_internal_get_cloudsLightningRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsLightningRadius;
}
constexpr float_t const& Enviro::EnviroLightning::__cordl_internal_get_cloudsLightningRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsLightningRadius;
}
constexpr void Enviro::EnviroLightning::__cordl_internal_set_cloudsLightningRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsLightningRadius = value;
}
constexpr float_t& Enviro::EnviroLightning::__cordl_internal_get_cloudsLightningDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsLightningDuration;
}
constexpr float_t const& Enviro::EnviroLightning::__cordl_internal_get_cloudsLightningDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsLightningDuration;
}
constexpr void Enviro::EnviroLightning::__cordl_internal_set_cloudsLightningDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsLightningDuration = value;
}
inline void Enviro::EnviroLightning::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightning*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroLightning* Enviro::EnviroLightning::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroLightning*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroLightning::EnviroLightning()   {
}

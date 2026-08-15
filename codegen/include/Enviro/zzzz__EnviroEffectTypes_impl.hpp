#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectTypes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroEffectTypes_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroEffectTypes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectTypes::*)()>(&::Enviro::EnviroEffectTypes::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectTypes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::EnviroEffectTypes::__cordl_internal_get_prefabVFXGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabVFXGraph;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::EnviroEffectTypes::__cordl_internal_get_prefabVFXGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabVFXGraph;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_prefabVFXGraph(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabVFXGraph = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroEffectTypes::__cordl_internal_get_localPositionOffsetVFXGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPositionOffsetVFXGraph;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroEffectTypes::__cordl_internal_get_localPositionOffsetVFXGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPositionOffsetVFXGraph;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_localPositionOffsetVFXGraph(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPositionOffsetVFXGraph = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroEffectTypes::__cordl_internal_get_localRotationOffsetVFXGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotationOffsetVFXGraph;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroEffectTypes::__cordl_internal_get_localRotationOffsetVFXGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotationOffsetVFXGraph;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_localRotationOffsetVFXGraph(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRotationOffsetVFXGraph = value;
}
constexpr float_t& Enviro::EnviroEffectTypes::__cordl_internal_get_maxEmissionVFXGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEmissionVFXGraph;
}
constexpr float_t const& Enviro::EnviroEffectTypes::__cordl_internal_get_maxEmissionVFXGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEmissionVFXGraph;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_maxEmissionVFXGraph(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxEmissionVFXGraph = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& Enviro::EnviroEffectTypes::__cordl_internal_get_mySystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& Enviro::EnviroEffectTypes::__cordl_internal_get_mySystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySystem;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_mySystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mySystem = value;
}
constexpr ::StringW& Enviro::EnviroEffectTypes::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Enviro::EnviroEffectTypes::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::EnviroEffectTypes::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::EnviroEffectTypes::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroEffectTypes::__cordl_internal_get_localPositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroEffectTypes::__cordl_internal_get_localPositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPositionOffset;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_localPositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroEffectTypes::__cordl_internal_get_localRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroEffectTypes::__cordl_internal_get_localRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotationOffset;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_localRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRotationOffset = value;
}
constexpr float_t& Enviro::EnviroEffectTypes::__cordl_internal_get_emissionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionRate;
}
constexpr float_t const& Enviro::EnviroEffectTypes::__cordl_internal_get_emissionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionRate;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_emissionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissionRate = value;
}
constexpr float_t& Enviro::EnviroEffectTypes::__cordl_internal_get_maxEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEmission;
}
constexpr float_t const& Enviro::EnviroEffectTypes::__cordl_internal_get_maxEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEmission;
}
constexpr void Enviro::EnviroEffectTypes::__cordl_internal_set_maxEmission(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxEmission = value;
}
inline void Enviro::EnviroEffectTypes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectTypes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEffectTypes* Enviro::EnviroEffectTypes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEffectTypes*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEffectTypes::EnviroEffectTypes()   {
}

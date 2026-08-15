#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMaterial.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioMaterial_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioMaterial::*)()>(&::GlobalNamespace::AudioMaterial::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMaterial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::AudioMaterial::__cordl_internal_get_Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::AudioMaterial::__cordl_internal_get_Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr void GlobalNamespace::AudioMaterial::__cordl_internal_set_Material(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Material = value;
}
constexpr float_t& GlobalNamespace::AudioMaterial::__cordl_internal_get_OcclusionMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionMultiplier;
}
constexpr float_t const& GlobalNamespace::AudioMaterial::__cordl_internal_get_OcclusionMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionMultiplier;
}
constexpr void GlobalNamespace::AudioMaterial::__cordl_internal_set_OcclusionMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcclusionMultiplier = value;
}
constexpr float_t& GlobalNamespace::AudioMaterial::__cordl_internal_get_ReverbAbsorption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbAbsorption;
}
constexpr float_t const& GlobalNamespace::AudioMaterial::__cordl_internal_get_ReverbAbsorption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbAbsorption;
}
constexpr void GlobalNamespace::AudioMaterial::__cordl_internal_set_ReverbAbsorption(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReverbAbsorption = value;
}
inline void GlobalNamespace::AudioMaterial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMaterial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioMaterial* GlobalNamespace::AudioMaterial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioMaterial*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioMaterial::AudioMaterial()   {
}

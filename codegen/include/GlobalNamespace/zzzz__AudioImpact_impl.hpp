#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioImpact.hpp"
#include "GlobalNamespace/zzzz__AudioImpactType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioImpact_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioImpact._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioImpact::*)()>(&::GlobalNamespace::AudioImpact::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioImpact*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::AudioImpact::__cordl_internal_get_Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::AudioImpact::__cordl_internal_get_Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr void GlobalNamespace::AudioImpact::__cordl_internal_set_Material(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Material = value;
}
constexpr ::GlobalNamespace::AudioImpactType& GlobalNamespace::AudioImpact::__cordl_internal_get_ImpactType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpactType;
}
constexpr ::GlobalNamespace::AudioImpactType const& GlobalNamespace::AudioImpact::__cordl_internal_get_ImpactType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpactType;
}
constexpr void GlobalNamespace::AudioImpact::__cordl_internal_set_ImpactType(::GlobalNamespace::AudioImpactType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImpactType = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::AudioImpact::__cordl_internal_get_SurfaceSoundSize1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfaceSoundSize1;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::AudioImpact::__cordl_internal_get_SurfaceSoundSize1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfaceSoundSize1;
}
constexpr void GlobalNamespace::AudioImpact::__cordl_internal_set_SurfaceSoundSize1(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SurfaceSoundSize1 = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::AudioImpact::__cordl_internal_get_SurfaceSoundSize2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfaceSoundSize2;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::AudioImpact::__cordl_internal_get_SurfaceSoundSize2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfaceSoundSize2;
}
constexpr void GlobalNamespace::AudioImpact::__cordl_internal_set_SurfaceSoundSize2(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SurfaceSoundSize2 = value;
}
inline void GlobalNamespace::AudioImpact::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioImpact*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioImpact* GlobalNamespace::AudioImpact::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioImpact*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioImpact::AudioImpact()   {
}

#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionMaterials.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__OcclusionMaterials_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::MA::Flora::OcclusionMaterials.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::OcclusionMaterials::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814d3800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionMaterials*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::OcclusionMaterials::setStaticF_DebugTestMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "DebugTestMaterial", ::MA::Flora::OcclusionMaterials*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> MA::Flora::OcclusionMaterials::getStaticF_DebugTestMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "DebugTestMaterial", ::MA::Flora::OcclusionMaterials*>();
}
inline void MA::Flora::OcclusionMaterials::setStaticF_DebugViewMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "DebugViewMaterial", ::MA::Flora::OcclusionMaterials*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> MA::Flora::OcclusionMaterials::getStaticF_DebugViewMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "DebugViewMaterial", ::MA::Flora::OcclusionMaterials*>();
}
inline void MA::Flora::OcclusionMaterials::Initialize(::MA::Flora::FloraRuntimeResources*  runtimeResources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionMaterials*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runtimeResources);
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionMaterials::OcclusionMaterials()   {
}

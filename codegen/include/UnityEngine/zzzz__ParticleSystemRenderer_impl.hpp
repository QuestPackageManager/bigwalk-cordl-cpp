#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(::by_ref<::ArrayW<::UnityEngine::Mesh*>>)>(&::UnityEngine::ParticleSystemRenderer::GetMeshes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822eeec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                        {"GetMeshes", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Mesh*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetMeshes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<::UnityEngine::Mesh*>>)>(&::UnityEngine::ParticleSystemRenderer::GetMeshes_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822eeeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                        {"GetMeshes_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Mesh*>>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ParticleSystemRenderer::GetMeshes(::by_ref<::ArrayW<::UnityEngine::Mesh*>>  meshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                        {"GetMeshes", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Mesh*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, meshes);
}
inline int32_t UnityEngine::ParticleSystemRenderer::GetMeshes_Injected(::System::IntPtr  _unity_self, ::by_ref<::ArrayW<::UnityEngine::Mesh*>>  meshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystemRenderer*>(),
                        {"GetMeshes_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Mesh*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, meshes);
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemRenderer::ParticleSystemRenderer()   {
}

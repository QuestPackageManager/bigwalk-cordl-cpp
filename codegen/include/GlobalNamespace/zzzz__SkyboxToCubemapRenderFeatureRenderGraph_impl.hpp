#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyboxToCubemapRenderFeatureRenderGraph.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__SkyboxToCubemapRenderFeatureRenderGraph_def.hpp"
#include "GlobalNamespace/zzzz__DrawSkyboxCustomPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::*)()>(&::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::Create)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180329550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(),
                    {::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph.AddRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::AddRenderPasses)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180329520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(),
                    {::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::*)(bool)>(&::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180329780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(),
                    {::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::*)()>(&::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180324470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_colorTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTarget;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_colorTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTarget;
}
constexpr void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_set_colorTarget(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorTarget = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shader;
}
constexpr void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_set_shader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shader = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_depthTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthTarget;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_depthTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthTarget;
}
constexpr void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_set_depthTarget(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthTarget = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_colorTargetHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTargetHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_colorTargetHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTargetHandle;
}
constexpr void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_set_colorTargetHandle(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorTargetHandle = value;
}
constexpr ::GlobalNamespace::DrawSkyboxCustomPass*& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_skyboxPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyboxPass;
}
constexpr ::GlobalNamespace::DrawSkyboxCustomPass* const& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_skyboxPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyboxPass;
}
constexpr void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_set_skyboxPass(::GlobalNamespace::DrawSkyboxCustomPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyboxPass = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_mirrorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_get_mirrorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrorMaterial;
}
constexpr void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::__cordl_internal_set_mirrorMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mirrorMaterial = value;
}
inline void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::Create()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph* GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph::SkyboxToCubemapRenderFeatureRenderGraph()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/BlurRendererFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__BlurRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__BlurRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__BlurSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlurRendererFeature.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlurRendererFeature::*)()>(&::GlobalNamespace::BlurRendererFeature::Create)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180324360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(),
                    {::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurRendererFeature.AddRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlurRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::BlurRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803241f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(),
                    {::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurRendererFeature.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlurRendererFeature::*)(bool)>(&::GlobalNamespace::BlurRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180324440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(),
                    {::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurRendererFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlurRendererFeature::*)()>(&::GlobalNamespace::BlurRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180324470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BlurSettings*& GlobalNamespace::BlurRendererFeature::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::GlobalNamespace::BlurSettings* const& GlobalNamespace::BlurRendererFeature::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GlobalNamespace::BlurRendererFeature::__cordl_internal_set_settings(::GlobalNamespace::BlurSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::BlurRendererFeature::__cordl_internal_get_shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::BlurRendererFeature::__cordl_internal_get_shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shader;
}
constexpr void GlobalNamespace::BlurRendererFeature::__cordl_internal_set_shader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shader = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BlurRendererFeature::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BlurRendererFeature::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::BlurRendererFeature::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::GlobalNamespace::BlurRenderPass*& GlobalNamespace::BlurRendererFeature::__cordl_internal_get_blurRenderPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurRenderPass;
}
constexpr ::GlobalNamespace::BlurRenderPass* const& GlobalNamespace::BlurRendererFeature::__cordl_internal_get_blurRenderPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurRenderPass;
}
constexpr void GlobalNamespace::BlurRendererFeature::__cordl_internal_set_blurRenderPass(::GlobalNamespace::BlurRenderPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blurRenderPass = value;
}
inline void GlobalNamespace::BlurRendererFeature::Create()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BlurRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::BlurRendererFeature::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::BlurRendererFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRendererFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BlurRendererFeature* GlobalNamespace::BlurRendererFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlurRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlurRendererFeature::BlurRendererFeature()   {
}

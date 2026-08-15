#pragma once
// IWYU pragma private; include "Enviro/EnviroURPRenderFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "Enviro/zzzz__EnviroURPRenderFeature_def.hpp"
#include "Enviro/zzzz__EnviroURPRenderGraph_def.hpp"
#include "Enviro/zzzz__EnviroURPRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroURPRenderFeature.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderFeature::*)()>(&::Enviro::EnviroURPRenderFeature::Create)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180606af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroURPRenderFeature*>(),
                    {::i2c::class_of<::Enviro::EnviroURPRenderFeature*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderFeature.AddRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::Enviro::EnviroURPRenderFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180606a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroURPRenderFeature*>(),
                    {::i2c::class_of<::Enviro::EnviroURPRenderFeature*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderFeature::*)()>(&::Enviro::EnviroURPRenderFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180324470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroURPRenderGraph*& Enviro::EnviroURPRenderFeature::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::Enviro::EnviroURPRenderGraph* const& Enviro::EnviroURPRenderFeature::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void Enviro::EnviroURPRenderFeature::__cordl_internal_set_graph(::Enviro::EnviroURPRenderGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
constexpr ::Enviro::EnviroURPRenderPass*& Enviro::EnviroURPRenderFeature::__cordl_internal_get_pass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pass;
}
constexpr ::Enviro::EnviroURPRenderPass* const& Enviro::EnviroURPRenderFeature::__cordl_internal_get_pass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pass;
}
constexpr void Enviro::EnviroURPRenderFeature::__cordl_internal_set_pass(::Enviro::EnviroURPRenderPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pass = value;
}
inline void Enviro::EnviroURPRenderFeature::setStaticF_disabled(bool  value)  {
::cordl_internals::setStaticField<bool, "disabled", ::Enviro::EnviroURPRenderFeature*>(std::forward<bool>(value));
}
inline bool Enviro::EnviroURPRenderFeature::getStaticF_disabled()  {
return ::cordl_internals::getStaticField<bool, "disabled", ::Enviro::EnviroURPRenderFeature*>();
}
inline void Enviro::EnviroURPRenderFeature::Create()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroURPRenderFeature*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroURPRenderFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroURPRenderFeature*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void Enviro::EnviroURPRenderFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroURPRenderFeature* Enviro::EnviroURPRenderFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroURPRenderFeature*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroURPRenderFeature::EnviroURPRenderFeature()   {
}

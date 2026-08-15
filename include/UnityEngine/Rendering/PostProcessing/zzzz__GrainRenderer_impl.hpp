#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/GrainRenderer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__GrainRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Grain_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::GrainRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::GrainRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::GrainRenderer::Render)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x181fb6fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::GrainRenderer.GetLookupFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::UnityEngine::Rendering::PostProcessing::GrainRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::GrainRenderer::GetLookupFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fb6f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(),
                        {"GetLookupFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::GrainRenderer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::GrainRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::GrainRenderer::Release)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fb6fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::GrainRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::GrainRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::GrainRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fb08a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::PostProcessing::GrainRenderer::__cordl_internal_get_m_GrainLookupRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrainLookupRT;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::PostProcessing::GrainRenderer::__cordl_internal_get_m_GrainLookupRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrainLookupRT;
}
constexpr void UnityEngine::Rendering::PostProcessing::GrainRenderer::__cordl_internal_set_m_GrainLookupRT(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrainLookupRT = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::GrainRenderer::__cordl_internal_get_m_SampleIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleIndex;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::GrainRenderer::__cordl_internal_get_m_SampleIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleIndex;
}
constexpr void UnityEngine::Rendering::PostProcessing::GrainRenderer::__cordl_internal_set_m_SampleIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SampleIndex = value;
}
inline void UnityEngine::Rendering::PostProcessing::GrainRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::Rendering::PostProcessing::GrainRenderer::GetLookupFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(),
                        {"GetLookupFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::GrainRenderer::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::GrainRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::GrainRenderer* UnityEngine::Rendering::PostProcessing::GrainRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::GrainRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::GrainRenderer::GrainRenderer()   {
}

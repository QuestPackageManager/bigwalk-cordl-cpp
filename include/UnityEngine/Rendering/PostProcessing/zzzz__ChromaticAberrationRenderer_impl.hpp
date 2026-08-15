#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ChromaticAberrationRenderer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ChromaticAberrationRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ChromaticAberration_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::Render)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181fb24b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::Release)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fb2480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fb08a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::__cordl_internal_get_m_InternalSpectralLut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalSpectralLut;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::__cordl_internal_get_m_InternalSpectralLut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalSpectralLut;
}
constexpr void UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::__cordl_internal_set_m_InternalSpectralLut(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InternalSpectralLut = value;
}
inline void UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer* UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer::ChromaticAberrationRenderer()   {
}

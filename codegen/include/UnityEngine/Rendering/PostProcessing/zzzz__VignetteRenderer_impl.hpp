#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/VignetteRenderer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__VignetteRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Vignette_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::VignetteRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::VignetteRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::VignetteRenderer::Render)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181fbeca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VignetteRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VignetteRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::VignetteRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::VignetteRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::VignetteRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fb08a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VignetteRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::VignetteRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VignetteRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::VignetteRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VignetteRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::VignetteRenderer* UnityEngine::Rendering::PostProcessing::VignetteRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::VignetteRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::VignetteRenderer::VignetteRenderer()   {
}

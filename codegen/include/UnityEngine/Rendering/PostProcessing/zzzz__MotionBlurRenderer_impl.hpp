#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MotionBlurRenderer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MotionBlurRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MotionBlurRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MotionBlur_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass::MotionBlurRenderer_Pass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass::MotionBlurRenderer_Pass()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass  UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass::VelocitySetup{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass  UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass::TileMax1{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass  UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass::TileMax2{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass  UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass::TileMaxV{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass  UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass::NeighborMax{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass  UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass::Reconstruction{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer.GetCameraFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::GetCameraFlags)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180908b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer.CreateTemporaryRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat)>(&::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::CreateTemporaryRT)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fb7910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(),
                        {"CreateTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::Render)> {
  constexpr static std::size_t size = 0x960;
  constexpr static std::size_t addrs = 0x181fb79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fb08a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::DepthTextureMode UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::GetCameraFlags()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::CreateTemporaryRT(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, int32_t  nameID, int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  RTFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(),
                        {"CreateTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, nameID, width, height, RTFormat);
}
inline void UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer* UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer::MotionBlurRenderer()   {
}

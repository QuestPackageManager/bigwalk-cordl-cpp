#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/DepthOfFieldRenderer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__DepthOfFieldRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__DepthOfFieldRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__DepthOfField_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::DepthOfFieldRenderer_Pass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::DepthOfFieldRenderer_Pass()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::CoCCalculation{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::CoCTemporalFilter{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::DownsampleAndPrefilter{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::BokehSmallKernel{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::BokehMediumKernel{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::BokehLargeKernel{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::BokehVeryLargeKernel{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::PostFilter{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::Combine{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass  UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass::DebugOverlay{static_cast<int32_t>(0x9)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fb13d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer.GetCameraFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::GetCameraFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer.SelectFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureFormat)>(&::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::SelectFormat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fb6950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                        {"SelectFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer.CalculateMaxCoCRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::CalculateMaxCoCRadius)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fb5d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                        {"CalculateMaxCoCRadius", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer.CheckHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::*)(int32_t, int32_t, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ::UnityEngine::RenderTextureFormat)>(&::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::CheckHistory)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181fb5d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                        {"CheckHistory", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::Render)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x181fb5fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::Release)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fb5ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>& UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::__cordl_internal_get_m_CoCHistoryTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CoCHistoryTextures;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>> const& UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::__cordl_internal_get_m_CoCHistoryTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CoCHistoryTextures;
}
constexpr void UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::__cordl_internal_set_m_CoCHistoryTextures(::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CoCHistoryTextures = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::__cordl_internal_get_m_HistoryPingPong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HistoryPingPong;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::__cordl_internal_get_m_HistoryPingPong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HistoryPingPong;
}
constexpr void UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::__cordl_internal_set_m_HistoryPingPong(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HistoryPingPong = value;
}
inline void UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::GetCameraFlags()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::SelectFormat(::UnityEngine::RenderTextureFormat  primary, ::UnityEngine::RenderTextureFormat  secondary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                        {"SelectFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method, primary, secondary);
}
inline float_t UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::CalculateMaxCoCRadius(int32_t  screenHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                        {"CalculateMaxCoCRadius", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, screenHeight);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::CheckHistory(int32_t  eye, int32_t  id, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::RenderTextureFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(),
                        {"CheckHistory", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, eye, id, context, format);
}
inline void UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer* UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer::DepthOfFieldRenderer()   {
}

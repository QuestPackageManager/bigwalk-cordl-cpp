#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorGradingRenderer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorGradingRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorGradingRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorGrading_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__HableCurve_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass::ColorGradingRenderer_Pass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass::ColorGradingRenderer_Pass()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass  UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass::LutGenLDRFromScratch{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass  UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass::LutGenLDR{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass  UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass::LutGenHDR2D{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::Render)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181fb4cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.RenderExternalPipeline3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::RenderExternalPipeline3D)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fb2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"RenderExternalPipeline3D", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.RenderHDRPipeline3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::RenderHDRPipeline3D)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0x181fb3910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"RenderHDRPipeline3D", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.RenderHDRPipeline2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::RenderHDRPipeline2D)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x181fb2ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"RenderHDRPipeline2D", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.RenderLDRPipeline2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::RenderLDRPipeline2D)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x181fb4380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"RenderLDRPipeline2D", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.CheckInternalLogLut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::CheckInternalLogLut)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181fb2770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"CheckInternalLogLut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.CheckInternalStripLut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::CheckInternalStripLut)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181fb28c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"CheckInternalStripLut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.GetCurveTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)(bool)>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::GetCurveTexture)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181fb2a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"GetCurveTexture", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.IsRenderTextureFormatSupportedForLinearFiltering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::IsRenderTextureFormatSupportedForLinearFiltering)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fb2cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"IsRenderTextureFormatSupportedForLinearFiltering", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.GetLutFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (*)()>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::GetLutFormat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fb2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"GetLutFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.GetCurveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (*)()>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::GetCurveFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fb29e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"GetCurveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::Release)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fb2d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fb4ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_GradingCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GradingCurves;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_GradingCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GradingCurves;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_set_m_GradingCurves(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GradingCurves = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_Pixels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pixels;
}
constexpr ::ArrayW<::UnityEngine::Color> const& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_Pixels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pixels;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_set_m_Pixels(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pixels = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_InternalLdrLut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalLdrLut;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_InternalLdrLut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalLdrLut;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_set_m_InternalLdrLut(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InternalLdrLut = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_InternalLogLut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalLogLut;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_InternalLogLut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalLogLut;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_set_m_InternalLogLut(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InternalLogLut = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve*& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_HableCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HableCurve;
}
constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve* const& UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_get_m_HableCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HableCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::__cordl_internal_set_m_HableCurve(::UnityEngine::Rendering::PostProcessing::HableCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HableCurve = value;
}
inline void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::RenderExternalPipeline3D(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"RenderExternalPipeline3D", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::RenderHDRPipeline3D(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"RenderHDRPipeline3D", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::RenderHDRPipeline2D(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"RenderHDRPipeline2D", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::RenderLDRPipeline2D(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"RenderLDRPipeline2D", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::CheckInternalLogLut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"CheckInternalLogLut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::CheckInternalStripLut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"CheckInternalStripLut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::GetCurveTexture(bool  hdr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"GetCurveTexture", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, hdr);
}
inline bool UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::IsRenderTextureFormatSupportedForLinearFiltering(::UnityEngine::RenderTextureFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"IsRenderTextureFormatSupportedForLinearFiltering", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::GetLutFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"GetLutFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::TextureFormat UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::GetCurveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {"GetCurveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer* UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer::ColorGradingRenderer()   {
}

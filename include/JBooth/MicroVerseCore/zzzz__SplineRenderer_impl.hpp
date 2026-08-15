#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SplineRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplineRenderer_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Easing_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Noise_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplinePath_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplineRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode::RenderDesc_SplineRenderer_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode::RenderDesc_SplineRenderer_Mode()   {
}
constexpr ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode  JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode::Path{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode  JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode::Area{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode  JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode::Intersection{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode  JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode::Road{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "splineContainer", ty: "::UnityW<::UnityEngine::Splines::SplineContainer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "widths", ty: "::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "widthEasing", ty: "::JBooth::MicroVerseCore::Easing*", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionNoise", ty: "::JBooth::MicroVerseCore::Noise*", modifiers: "", def_value: Some("{}") }, CppParam { name: "widthNoise", ty: "::JBooth::MicroVerseCore::Noise*", modifiers: "", def_value: Some("{}") }, CppParam { name: "widthBoost", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdfMult", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mode", ty: "::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode", modifiers: "", def_value: Some("{}") }, CppParam { name: "numSteps", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::SplineRenderer_RenderDesc::SplineRenderer_RenderDesc(::UnityW<::UnityEngine::Splines::SplineContainer>  splineContainer, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*  widths, ::JBooth::MicroVerseCore::Easing*  widthEasing, ::JBooth::MicroVerseCore::Noise*  positionNoise, ::JBooth::MicroVerseCore::Noise*  widthNoise, float_t  widthBoost, float_t  sdfMult, ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode  mode, int32_t  numSteps) noexcept  {
this->splineContainer = splineContainer;
this->widths = widths;
this->widthEasing = widthEasing;
this->positionNoise = positionNoise;
this->widthNoise = widthNoise;
this->widthBoost = widthBoost;
this->sdfMult = sdfMult;
this->mode = mode;
this->numSteps = numSteps;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplineRenderer_RenderDesc::SplineRenderer_RenderDesc()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineRenderer::*)(::UnityEngine::Splines::SplineContainer*, ::UnityEngine::Terrain*, ::JBooth::MicroVerseCore::Noise*, ::JBooth::MicroVerseCore::Noise*, int32_t, float_t, ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode, int32_t)>(&::JBooth::MicroVerseCore::SplineRenderer::Render)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181424960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineRenderer::*)(::UnityEngine::Splines::SplineContainer*, ::UnityEngine::Terrain*, ::JBooth::MicroVerseCore::Noise*, ::JBooth::MicroVerseCore::Noise*, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*, ::JBooth::MicroVerseCore::Easing*, int32_t, float_t, int32_t)>(&::JBooth::MicroVerseCore::SplineRenderer::Render)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181424ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Easing*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineRenderer::*)(::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>, ::UnityEngine::Terrain*, int32_t, float_t, int32_t)>(&::JBooth::MicroVerseCore::SplineRenderer::Render)> {
  constexpr static std::size_t size = 0x15f0;
  constexpr static std::size_t addrs = 0x181424c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {"Render", {}, {::i2c::type_of<::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineRenderer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineRenderer::*)()>(&::JBooth::MicroVerseCore::SplineRenderer::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181424900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineRenderer::*)()>(&::JBooth::MicroVerseCore::SplineRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ComputeBuffer*& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_curveBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_curveBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveBuffer;
}
constexpr void JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_set_curveBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curveBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_lengthBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lengthBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_lengthBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lengthBuffer;
}
constexpr void JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_set_lengthBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lengthBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_widthBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_widthBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthBuffer;
}
constexpr void JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_set_widthBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___widthBuffer = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr void JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_set_info(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___info = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_widthInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthInfo;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_widthInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthInfo;
}
constexpr void JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_set_widthInfo(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___widthInfo = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_splineSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineSDF;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_splineSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineSDF;
}
constexpr void JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_set_splineSDF(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineSDF = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_lastMaxSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMaxSDF;
}
constexpr float_t const& JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_get_lastMaxSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMaxSDF;
}
constexpr void JBooth::MicroVerseCore::SplineRenderer::__cordl_internal_set_lastMaxSDF(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMaxSDF = value;
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF_slineRenderShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "slineRenderShader", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::SplineRenderer::getStaticF_slineRenderShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "slineRenderShader", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF_splineClearShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "splineClearShader", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::SplineRenderer::getStaticF_splineClearShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "splineClearShader", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__MaxSDF(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_MaxSDF", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__MaxSDF()  {
return ::cordl_internals::getStaticField<int32_t, "_MaxSDF", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__RealSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__RealSize()  {
return ::cordl_internals::getStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__Transform(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__Transform()  {
return ::cordl_internals::getStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__Info(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Info", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__Info()  {
return ::cordl_internals::getStaticField<int32_t, "_Info", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__WidthInfo(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WidthInfo", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__WidthInfo()  {
return ::cordl_internals::getStaticField<int32_t, "_WidthInfo", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__Curves(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Curves", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__Curves()  {
return ::cordl_internals::getStaticField<int32_t, "_Curves", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__CurveLengths(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurveLengths", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__CurveLengths()  {
return ::cordl_internals::getStaticField<int32_t, "_CurveLengths", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__WidthBoost(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WidthBoost", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__WidthBoost()  {
return ::cordl_internals::getStaticField<int32_t, "_WidthBoost", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__SDFMult(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SDFMult", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__SDFMult()  {
return ::cordl_internals::getStaticField<int32_t, "_SDFMult", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__NumSegments(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NumSegments", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__NumSegments()  {
return ::cordl_internals::getStaticField<int32_t, "_NumSegments", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__SplineBounds(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SplineBounds", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__SplineBounds()  {
return ::cordl_internals::getStaticField<int32_t, "_SplineBounds", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::setStaticF__Widths(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Widths", ::JBooth::MicroVerseCore::SplineRenderer*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplineRenderer::getStaticF__Widths()  {
return ::cordl_internals::getStaticField<int32_t, "_Widths", ::JBooth::MicroVerseCore::SplineRenderer*>();
}
inline void JBooth::MicroVerseCore::SplineRenderer::Render(::UnityEngine::Splines::SplineContainer*  sc, ::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::Noise*  positionNoise, ::JBooth::MicroVerseCore::Noise*  widthNoise, int32_t  sdfRes, float_t  maxSDF, ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode  mode, int32_t  numSteps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sc, terrain, positionNoise, widthNoise, sdfRes, maxSDF, mode, numSteps);
}
inline void JBooth::MicroVerseCore::SplineRenderer::Render(::UnityEngine::Splines::SplineContainer*  sc, ::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::Noise*  positionNoise, ::JBooth::MicroVerseCore::Noise*  widthNoise, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*  widths, ::JBooth::MicroVerseCore::Easing*  easing, int32_t  sdfRes, float_t  maxSDF, int32_t  numSteps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::Easing*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sc, terrain, positionNoise, widthNoise, widths, easing, sdfRes, maxSDF, numSteps);
}
inline void JBooth::MicroVerseCore::SplineRenderer::Render(::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>  renderDescs, ::UnityEngine::Terrain*  terrain, int32_t  sdfRes, float_t  maxSDF, int32_t  numSteps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {"Render", {}, {::i2c::type_of<::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderDescs, terrain, sdfRes, maxSDF, numSteps);
}
inline void JBooth::MicroVerseCore::SplineRenderer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplineRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::SplineRenderer* JBooth::MicroVerseCore::SplineRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::SplineRenderer*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplineRenderer::SplineRenderer()   {
}

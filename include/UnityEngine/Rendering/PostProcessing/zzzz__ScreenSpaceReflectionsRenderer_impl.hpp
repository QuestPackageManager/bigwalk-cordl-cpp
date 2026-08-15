#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ScreenSpaceReflectionsRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScreenSpaceReflectionResolution_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScreenSpaceReflectionsRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScreenSpaceReflectionsRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScreenSpaceReflections_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::*)()>(&::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::__cordl_internal_get_maximumIterationCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumIterationCount;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::__cordl_internal_get_maximumIterationCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumIterationCount;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::__cordl_internal_set_maximumIterationCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumIterationCount = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::__cordl_internal_get_thickness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickness;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::__cordl_internal_get_thickness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickness;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::__cordl_internal_set_thickness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thickness = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::__cordl_internal_get_downsampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampling;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::__cordl_internal_get_downsampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampling;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::__cordl_internal_set_downsampling(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downsampling = value;
}
inline void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset* UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset::ScreenSpaceReflectionsRenderer_QualityPreset()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass::ScreenSpaceReflectionsRenderer_Pass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass::ScreenSpaceReflectionsRenderer_Pass()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass  UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass::Test{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass  UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass::Resolve{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass  UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass::Reproject{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass  UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass::Composite{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer.GetCameraFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::GetCameraFlags)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180908b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer.CheckRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::*)(::by_ref<::UnityEngine::RenderTexture*>, int32_t, int32_t, ::UnityEngine::FilterMode, bool)>(&::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::CheckRT)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181fbc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(),
                        {"CheckRT", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::Render)> {
  constexpr static std::size_t size = 0x1080;
  constexpr static std::size_t addrs = 0x181fbc590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::Release)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fbc540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181fbd610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_get_m_Resolve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resolve;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_get_m_Resolve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resolve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_set_m_Resolve(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Resolve = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_get_m_History()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_History;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_get_m_History() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_History;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_set_m_History(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_History = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_get_m_MipIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MipIDs;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_get_m_MipIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MipIDs;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_set_m_MipIDs(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MipIDs = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*>& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_get_m_Presets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Presets;
}
constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*> const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_get_m_Presets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Presets;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::__cordl_internal_set_m_Presets(::ArrayW<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Presets = value;
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::GetCameraFlags()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::CheckRT(::by_ref<::UnityEngine::RenderTexture*>  rt, int32_t  width, int32_t  height, ::UnityEngine::FilterMode  filterMode, bool  useMipMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(),
                        {"CheckRT", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, width, height, filterMode, useMipMap);
}
inline void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer* UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::ScreenSpaceReflectionsRenderer()   {
}

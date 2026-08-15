#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ScalableAO.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScalableAO_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AmbientOcclusion_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__IAmbientOcclusionMethod_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheet_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScalableAO_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::ScalableAO_Pass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::ScalableAO_Pass()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass  UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::OcclusionEstimationForward{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass  UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::OcclusionEstimationDeferred{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass  UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::HorizontalBlurForward{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass  UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::HorizontalBlurDeferred{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass  UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::VerticalBlur{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass  UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::CompositionForward{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass  UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::CompositionDeferred{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass  UnityEngine::Rendering::PostProcessing::ScalableAO_Pass::DebugOverlay{static_cast<int32_t>(0x7)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScalableAO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScalableAO::*)(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*)>(&::UnityEngine::Rendering::PostProcessing::ScalableAO::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fbc300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScalableAO.GetCameraFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Rendering::PostProcessing::ScalableAO::*)()>(&::UnityEngine::Rendering::PostProcessing::ScalableAO::GetCameraFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"GetCameraFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScalableAO.DoLazyInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScalableAO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ScalableAO::DoLazyInitialization)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181fbb900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"DoLazyInitialization", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScalableAO.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScalableAO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, int32_t)>(&::UnityEngine::Rendering::PostProcessing::ScalableAO::Render)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x181fbbcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScalableAO.RenderAfterOpaque
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScalableAO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ScalableAO::RenderAfterOpaque)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181fbba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"RenderAfterOpaque", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScalableAO.RenderAmbientOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScalableAO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ScalableAO::RenderAmbientOnly)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fbbc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"RenderAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScalableAO.CompositeAmbientOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScalableAO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ScalableAO::CompositeAmbientOnly)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181fbb760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"CompositeAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScalableAO.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScalableAO::*)()>(&::UnityEngine::Rendering::PostProcessing::ScalableAO::Release)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fbba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Result;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Result;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_set_m_Result(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Result = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet*& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_PropertySheet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertySheet;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet* const& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_PropertySheet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertySheet;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_set_m_PropertySheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertySheet = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion> const& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_set_m_Settings(::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_MRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MRT;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_MRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MRT;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_set_m_MRT(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MRT = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_SampleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleCount;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_get_m_SampleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleCount;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScalableAO::__cordl_internal_set_m_SampleCount(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SampleCount = value;
}
inline void UnityEngine::Rendering::PostProcessing::ScalableAO::_ctor(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Rendering::PostProcessing::ScalableAO::GetCameraFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"GetCameraFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ScalableAO::DoLazyInitialization(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"DoLazyInitialization", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ScalableAO::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  occlusionSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, cmd, occlusionSource);
}
inline void UnityEngine::Rendering::PostProcessing::ScalableAO::RenderAfterOpaque(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"RenderAfterOpaque", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ScalableAO::RenderAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"RenderAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ScalableAO::CompositeAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"CompositeAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ScalableAO::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ScalableAO* UnityEngine::Rendering::PostProcessing::ScalableAO::New_ctor(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(settings));
}
/// @brief Convert operator to "::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod"
constexpr  UnityEngine::Rendering::PostProcessing::ScalableAO::operator ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*() noexcept {
return static_cast<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod"
constexpr ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod* UnityEngine::Rendering::PostProcessing::ScalableAO::i___UnityEngine__Rendering__PostProcessing__IAmbientOcclusionMethod() noexcept {
return static_cast<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ScalableAO::ScalableAO()   {
}

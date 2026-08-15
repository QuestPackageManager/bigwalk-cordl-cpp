#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AmbientOcclusionRenderer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__IAmbientOcclusionMethod_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AmbientOcclusionRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AmbientOcclusion_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__IAmbientOcclusionMethod_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MultiScaleVO_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScalableAO_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::Init)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fb0600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer.IsAmbientOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::IsAmbientOnly)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fb0780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {"IsAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod* (::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::Get)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fb05e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer.GetCameraFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::GetCameraFlags)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fb04c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::Release)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fb07c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer.GetScalableAO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::ScalableAO* (::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::GetScalableAO)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fb05a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {"GetScalableAO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer.GetMultiScaleVO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::MultiScaleVO* (::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::GetMultiScaleVO)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fb0560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {"GetMultiScaleVO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::Render)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fb08a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>& UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::__cordl_internal_get_m_Methods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Methods;
}
constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*> const& UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::__cordl_internal_get_m_Methods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Methods;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::__cordl_internal_set_m_Methods(::ArrayW<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Methods = value;
}
inline void UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::IsAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {"IsAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod* UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>(this, ___internal_method);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::GetCameraFlags()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ScalableAO* UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::GetScalableAO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {"GetScalableAO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::ScalableAO*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::MultiScaleVO* UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::GetMultiScaleVO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {"GetMultiScaleVO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer* UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer::AmbientOcclusionRenderer()   {
}

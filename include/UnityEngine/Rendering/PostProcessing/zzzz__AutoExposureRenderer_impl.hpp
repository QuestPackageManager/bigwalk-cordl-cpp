#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AutoExposureRenderer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AutoExposureRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AutoExposure_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fb13d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer.CheckTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::CheckTexture)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fb0ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(),
                        {"CheckTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::Render)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x181fb0e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fb0dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>& UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::__cordl_internal_get_m_AutoExposurePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoExposurePool;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>> const& UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::__cordl_internal_get_m_AutoExposurePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoExposurePool;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::__cordl_internal_set_m_AutoExposurePool(::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoExposurePool = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::__cordl_internal_get_m_AutoExposurePingPong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoExposurePingPong;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::__cordl_internal_get_m_AutoExposurePingPong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoExposurePingPong;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::__cordl_internal_set_m_AutoExposurePingPong(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoExposurePingPong = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::__cordl_internal_get_m_CurrentAutoExposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentAutoExposure;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::__cordl_internal_get_m_CurrentAutoExposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentAutoExposure;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::__cordl_internal_set_m_CurrentAutoExposure(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentAutoExposure = value;
}
inline void UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::CheckTexture(int32_t  eye, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(),
                        {"CheckTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eye, id);
}
inline void UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer* UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer::AutoExposureRenderer()   {
}

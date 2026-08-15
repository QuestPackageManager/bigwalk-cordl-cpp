#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OnDemandRendering.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OnDemandRendering_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.get_willCurrentFrameRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::OnDemandRendering::get_willCurrentFrameRender)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822a0c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"get_willCurrentFrameRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.get_renderFrameInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::OnDemandRendering::get_renderFrameInterval)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822a0c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"get_renderFrameInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.GetRenderFrameInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>)>(&::UnityEngine::Rendering::OnDemandRendering::GetRenderFrameInterval)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822a0be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"GetRenderFrameInterval", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.GetEffectiveRenderFrameRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::OnDemandRendering::GetEffectiveRenderFrameRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822a0bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"GetEffectiveRenderFrameRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.get_effectiveRenderFrameRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::OnDemandRendering::get_effectiveRenderFrameRate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822a0c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"get_effectiveRenderFrameRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OnDemandRendering::setStaticF_m_RenderFrameInterval(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "m_RenderFrameInterval", ::UnityEngine::Rendering::OnDemandRendering*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OnDemandRendering::getStaticF_m_RenderFrameInterval()  {
return ::cordl_internals::getStaticField<int32_t, "m_RenderFrameInterval", ::UnityEngine::Rendering::OnDemandRendering*>();
}
inline bool UnityEngine::Rendering::OnDemandRendering::get_willCurrentFrameRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"get_willCurrentFrameRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::OnDemandRendering::get_renderFrameInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"get_renderFrameInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::OnDemandRendering::GetRenderFrameInterval(::by_ref<int32_t>  frameInterval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"GetRenderFrameInterval", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frameInterval);
}
inline float_t UnityEngine::Rendering::OnDemandRendering::GetEffectiveRenderFrameRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"GetEffectiveRenderFrameRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::OnDemandRendering::get_effectiveRenderFrameRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(),
                        {"get_effectiveRenderFrameRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OnDemandRendering::OnDemandRendering()   {
}

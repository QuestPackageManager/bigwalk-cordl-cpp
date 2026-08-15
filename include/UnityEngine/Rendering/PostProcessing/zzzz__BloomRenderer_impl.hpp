#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/BloomRenderer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__BloomRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__BloomRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Bloom_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::BloomRenderer_Pass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::BloomRenderer_Pass()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass  UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::Prefilter13{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass  UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::Prefilter4{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass  UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::Downsample13{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass  UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::Downsample4{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass  UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::UpsampleTent{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass  UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::UpsampleBox{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass  UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::DebugOverlayThreshold{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass  UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::DebugOverlayTent{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass  UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass::DebugOverlayBox{static_cast<int32_t>(0x8)};
// Ctor Parameters [CppParam { name: "down", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "up", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level::BloomRenderer_Level(int32_t  down, int32_t  up) noexcept  {
this->down = down;
this->up = up;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level::BloomRenderer_Level()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::BloomRenderer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::BloomRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::BloomRenderer::Init)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181fb16c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BloomRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BloomRenderer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::BloomRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::BloomRenderer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::BloomRenderer::Render)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x181fb1790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BloomRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BloomRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::BloomRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::BloomRenderer::*)()>(&::UnityEngine::Rendering::PostProcessing::BloomRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fb08a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BloomRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level>& UnityEngine::Rendering::PostProcessing::BloomRenderer::__cordl_internal_get_m_Pyramid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pyramid;
}
constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level> const& UnityEngine::Rendering::PostProcessing::BloomRenderer::__cordl_internal_get_m_Pyramid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pyramid;
}
constexpr void UnityEngine::Rendering::PostProcessing::BloomRenderer::__cordl_internal_set_m_Pyramid(::ArrayW<::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pyramid = value;
}
inline void UnityEngine::Rendering::PostProcessing::BloomRenderer::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BloomRenderer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::BloomRenderer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BloomRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::BloomRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BloomRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::BloomRenderer* UnityEngine::Rendering::PostProcessing::BloomRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::BloomRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::BloomRenderer::BloomRenderer()   {
}

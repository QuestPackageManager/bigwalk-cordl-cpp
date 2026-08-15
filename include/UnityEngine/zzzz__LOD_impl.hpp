#pragma once
// IWYU pragma private; include "UnityEngine/LOD.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__LOD_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::UnityEngine::LOD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LOD::*)(float_t, ::ArrayW<::UnityEngine::Renderer*>)>(&::UnityEngine::LOD::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182250f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LOD>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::LOD::_ctor(float_t  screenRelativeTransitionHeight, ::ArrayW<::UnityEngine::Renderer*>  renderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LOD>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, screenRelativeTransitionHeight, renderers);
}
// Ctor Parameters [CppParam { name: "screenRelativeTransitionHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fadeTransitionWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderers", ty: "::ArrayW<::UnityW<::UnityEngine::Renderer>>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LOD::LOD(float_t  screenRelativeTransitionHeight, float_t  fadeTransitionWidth, ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers) noexcept  {
this->screenRelativeTransitionHeight = screenRelativeTransitionHeight;
this->fadeTransitionWidth = fadeTransitionWidth;
this->renderers = renderers;
}
// Ctor Parameters []
constexpr ::UnityEngine::LOD::LOD()   {
}

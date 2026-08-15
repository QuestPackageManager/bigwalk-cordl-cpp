#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEffectRendererExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRendererExtensions_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRendererExtensions.RenderOrLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessEffectRendererExtensions::RenderOrLog)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fc2530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRendererExtensions*>(),
                        {"RenderOrLog", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Exception* UnityEngine::Rendering::PostProcessing::PostProcessEffectRendererExtensions::RenderOrLog(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*  self, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRendererExtensions*>(),
                        {"RenderOrLog", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, self, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRendererExtensions::PostProcessEffectRendererExtensions()   {
}

#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingRequestHandles.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestHandles_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IComputeRenderGraphBuilder_def.hpp"
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequestHandles.UseWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingRequestHandles::*)(::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*)>(&::MA::Flora::IndirectCullingRequestHandles::UseWith)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1814cc210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequestHandles>(),
                        {"UseWith", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::IndirectCullingRequestHandles::UseWith(::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequestHandles>(),
                        {"UseWith", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
}
// Ctor Parameters [CppParam { name: "DrawArgsBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibilityBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectCullingRequestHandles::IndirectCullingRequestHandles(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  DrawArgsBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  VisibilityBuffer) noexcept  {
this->DrawArgsBuffer = DrawArgsBuffer;
this->VisibilityBuffer = VisibilityBuffer;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingRequestHandles::IndirectCullingRequestHandles()   {
}

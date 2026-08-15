#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionComputeShaders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__OcclusionComputeShaders_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::MA::Flora::OcclusionComputeShaders.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::OcclusionComputeShaders::Initialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814cf1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionComputeShaders*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::OcclusionComputeShaders::setStaticF_DebugOcclusionCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "DebugOcclusionCS", ::MA::Flora::OcclusionComputeShaders*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::OcclusionComputeShaders::getStaticF_DebugOcclusionCS()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "DebugOcclusionCS", ::MA::Flora::OcclusionComputeShaders*>();
}
inline void MA::Flora::OcclusionComputeShaders::setStaticF_DebugOcclusionClearKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DebugOcclusionClearKernel", ::MA::Flora::OcclusionComputeShaders*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::OcclusionComputeShaders::getStaticF_DebugOcclusionClearKernel()  {
return ::cordl_internals::getStaticField<int32_t, "DebugOcclusionClearKernel", ::MA::Flora::OcclusionComputeShaders*>();
}
inline void MA::Flora::OcclusionComputeShaders::setStaticF_BuildOcclusionDepthCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "BuildOcclusionDepthCS", ::MA::Flora::OcclusionComputeShaders*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::OcclusionComputeShaders::getStaticF_BuildOcclusionDepthCS()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "BuildOcclusionDepthCS", ::MA::Flora::OcclusionComputeShaders*>();
}
inline void MA::Flora::OcclusionComputeShaders::setStaticF_BuildOcclusionDepthDownscaleKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BuildOcclusionDepthDownscaleKernel", ::MA::Flora::OcclusionComputeShaders*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::OcclusionComputeShaders::getStaticF_BuildOcclusionDepthDownscaleKernel()  {
return ::cordl_internals::getStaticField<int32_t, "BuildOcclusionDepthDownscaleKernel", ::MA::Flora::OcclusionComputeShaders*>();
}
inline void MA::Flora::OcclusionComputeShaders::Initialize(::MA::Flora::FloraRuntimeResources*  runtimeResources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionComputeShaders*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runtimeResources);
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionComputeShaders::OcclusionComputeShaders()   {
}

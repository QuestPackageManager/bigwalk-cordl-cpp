#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionSamplers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__OcclusionSamplers_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
//  Writing Method size for method: ::MA::Flora::OcclusionSamplers.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::OcclusionSamplers::Initialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814d3960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionSamplers*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::OcclusionSamplers::setStaticF_UpdateOccluders(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "UpdateOccluders", ::MA::Flora::OcclusionSamplers*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* MA::Flora::OcclusionSamplers::getStaticF_UpdateOccluders()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "UpdateOccluders", ::MA::Flora::OcclusionSamplers*>();
}
inline void MA::Flora::OcclusionSamplers::setStaticF_OcclusionTestOverlay(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "OcclusionTestOverlay", ::MA::Flora::OcclusionSamplers*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* MA::Flora::OcclusionSamplers::getStaticF_OcclusionTestOverlay()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "OcclusionTestOverlay", ::MA::Flora::OcclusionSamplers*>();
}
inline void MA::Flora::OcclusionSamplers::setStaticF_OccluderOverlay(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "OccluderOverlay", ::MA::Flora::OcclusionSamplers*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* MA::Flora::OcclusionSamplers::getStaticF_OccluderOverlay()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "OccluderOverlay", ::MA::Flora::OcclusionSamplers*>();
}
inline void MA::Flora::OcclusionSamplers::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionSamplers*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionSamplers::OcclusionSamplers()   {
}

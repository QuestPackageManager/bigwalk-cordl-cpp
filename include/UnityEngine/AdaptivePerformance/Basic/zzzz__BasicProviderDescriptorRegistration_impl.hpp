#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Basic/BasicProviderDescriptorRegistration.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/Basic/zzzz__BasicProviderDescriptorRegistration_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__AdaptivePerformanceSubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicProviderDescriptorRegistration.RegisterDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor* (*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicProviderDescriptorRegistration::RegisterDescriptor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182223fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicProviderDescriptorRegistration*>(),
                        {"RegisterDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor* UnityEngine::AdaptivePerformance::Basic::BasicProviderDescriptorRegistration::RegisterDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicProviderDescriptorRegistration*>(),
                        {"RegisterDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::Basic::BasicProviderDescriptorRegistration::BasicProviderDescriptorRegistration()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/AdaptivePerformanceSubsystemRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__AdaptivePerformanceSubsystemRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__AdaptivePerformanceSubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry.RegisterDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor* (*)(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo)>(&::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry::RegisterDescriptor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182223240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry*>(),
                        {"RegisterDescriptor", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry.GetRegisteredDescriptors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor*>* (*)()>(&::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry::GetRegisteredDescriptors)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822231e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry*>(),
                        {"GetRegisteredDescriptors", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor* UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry::RegisterDescriptor(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo  cinfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry*>(),
                        {"RegisterDescriptor", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor*>(nullptr, ___internal_method, cinfo);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor*>* UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry::GetRegisteredDescriptors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry*>(),
                        {"GetRegisteredDescriptors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor*>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry::AdaptivePerformanceSubsystemRegistry()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/IDevicePerformanceLevelControl.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__IDevicePerformanceLevelControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl.get_MaxCpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::*)()>(&::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::get_MaxCpuPerformanceLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl.get_MaxGpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::*)()>(&::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::get_MaxGpuPerformanceLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl.SetPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::SetPerformanceLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl.EnableCpuBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::*)()>(&::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::EnableCpuBoost)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl.EnableGpuBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::*)()>(&::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::EnableGpuBoost)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 4}
                ));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::get_MaxCpuPerformanceLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::get_MaxGpuPerformanceLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::SetPerformanceLevel(::by_ref<int32_t>  cpu, ::by_ref<int32_t>  gpu)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cpu, gpu);
}
inline bool UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::EnableCpuBoost()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl::EnableGpuBoost()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}

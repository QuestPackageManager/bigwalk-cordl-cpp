#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IDevicePerformanceControl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IDevicePerformanceControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl.get_MaxCpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::*)()>(&::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::get_MaxCpuPerformanceLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl.get_MaxGpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::*)()>(&::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::get_MaxGpuPerformanceLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl.get_CpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::*)()>(&::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::get_CpuLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl.set_CpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::set_CpuLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl.get_GpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::*)()>(&::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::get_GpuLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl.set_GpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::IDevicePerformanceControl::set_GpuLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 5}
                ));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AdaptivePerformance::IDevicePerformanceControl::get_MaxCpuPerformanceLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::IDevicePerformanceControl::get_MaxGpuPerformanceLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::IDevicePerformanceControl::get_CpuLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IDevicePerformanceControl::set_CpuLevel(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::IDevicePerformanceControl::get_GpuLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IDevicePerformanceControl::set_GpuLevel(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}

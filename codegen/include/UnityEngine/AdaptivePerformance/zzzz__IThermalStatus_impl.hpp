#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IThermalStatus.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IThermalStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalMetrics_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IThermalStatus.get_ThermalMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::ThermalMetrics (::UnityEngine::AdaptivePerformance::IThermalStatus::*)()>(&::UnityEngine::AdaptivePerformance::IThermalStatus::get_ThermalMetrics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IThermalStatus*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IThermalStatus*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::AdaptivePerformance::ThermalMetrics UnityEngine::AdaptivePerformance::IThermalStatus::get_ThermalMetrics()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IThermalStatus*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::ThermalMetrics>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IPerformanceModeStatus.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IPerformanceModeStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceModeEventHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IPerformanceModeStatus.add_PerformanceModeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IPerformanceModeStatus::*)(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*)>(&::UnityEngine::AdaptivePerformance::IPerformanceModeStatus::add_PerformanceModeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IPerformanceModeStatus.remove_PerformanceModeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IPerformanceModeStatus::*)(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*)>(&::UnityEngine::AdaptivePerformance::IPerformanceModeStatus::remove_PerformanceModeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::IPerformanceModeStatus::add_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::IPerformanceModeStatus::remove_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}

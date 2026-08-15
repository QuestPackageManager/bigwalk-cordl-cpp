#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IPerformanceStatus.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IPerformanceStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__FrameTiming_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneckChangeHandler_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMetrics_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IPerformanceStatus.get_PerformanceMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::PerformanceMetrics (::UnityEngine::AdaptivePerformance::IPerformanceStatus::*)()>(&::UnityEngine::AdaptivePerformance::IPerformanceStatus::get_PerformanceMetrics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IPerformanceStatus.get_FrameTiming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::FrameTiming (::UnityEngine::AdaptivePerformance::IPerformanceStatus::*)()>(&::UnityEngine::AdaptivePerformance::IPerformanceStatus::get_FrameTiming)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IPerformanceStatus.add_PerformanceBottleneckChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IPerformanceStatus::*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*)>(&::UnityEngine::AdaptivePerformance::IPerformanceStatus::add_PerformanceBottleneckChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IPerformanceStatus.remove_PerformanceBottleneckChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IPerformanceStatus::*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*)>(&::UnityEngine::AdaptivePerformance::IPerformanceStatus::remove_PerformanceBottleneckChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::AdaptivePerformance::PerformanceMetrics UnityEngine::AdaptivePerformance::IPerformanceStatus::get_PerformanceMetrics()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::FrameTiming UnityEngine::AdaptivePerformance::IPerformanceStatus::get_FrameTiming()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::FrameTiming>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IPerformanceStatus::add_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::IPerformanceStatus::remove_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/BottleneckUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__BottleneckUtil_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneck_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::BottleneckUtil.DetermineBottleneck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::PerformanceBottleneck (*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneck, float_t, float_t, float_t, float_t)>(&::UnityEngine::AdaptivePerformance::BottleneckUtil::DetermineBottleneck)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182220d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::BottleneckUtil*>(),
                        {"DetermineBottleneck", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneck>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::BottleneckUtil.HittingFrameRateLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, float_t)>(&::UnityEngine::AdaptivePerformance::BottleneckUtil::HittingFrameRateLimit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182220eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::BottleneckUtil*>(),
                        {"HittingFrameRateLimit", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::AdaptivePerformance::PerformanceBottleneck UnityEngine::AdaptivePerformance::BottleneckUtil::DetermineBottleneck(::UnityEngine::AdaptivePerformance::PerformanceBottleneck  prevBottleneck, float_t  averageCpuFrameTime, float_t  averageGpuFrametime, float_t  averageOverallFrametime, float_t  targetFrameTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::BottleneckUtil*>(),
                        {"DetermineBottleneck", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneck>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::PerformanceBottleneck>(nullptr, ___internal_method, prevBottleneck, averageCpuFrameTime, averageGpuFrametime, averageOverallFrametime, targetFrameTime);
}
inline bool UnityEngine::AdaptivePerformance::BottleneckUtil::HittingFrameRateLimit(float_t  actualFrameTime, float_t  thresholdFactor, float_t  targetFrameTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::BottleneckUtil*>(),
                        {"HittingFrameRateLimit", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actualFrameTime, thresholdFactor, targetFrameTime);
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::BottleneckUtil::BottleneckUtil()   {
}

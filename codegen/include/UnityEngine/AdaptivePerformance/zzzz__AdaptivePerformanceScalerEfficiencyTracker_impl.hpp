#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceScalerEfficiencyTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerEfficiencyTracker_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::get_IsRunning)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x180e979d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*, bool)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18221db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*>(),
                        {"Start", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::Stop)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18221dc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_get_m_Scaler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Scaler;
}
constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler> const& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_get_m_Scaler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Scaler;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_set_m_Scaler(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Scaler = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_get_m_LastAverageGpuFrameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAverageGpuFrameTime;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_get_m_LastAverageGpuFrameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAverageGpuFrameTime;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_set_m_LastAverageGpuFrameTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastAverageGpuFrameTime = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_get_m_LastAverageCpuFrameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAverageCpuFrameTime;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_get_m_LastAverageCpuFrameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAverageCpuFrameTime;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_set_m_LastAverageCpuFrameTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastAverageCpuFrameTime = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_get_m_IsApplied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsApplied;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_get_m_IsApplied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsApplied;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::__cordl_internal_set_m_IsApplied(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsApplied = value;
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::Start(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler, bool  isApply)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*>(),
                        {"Start", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaler, isApply);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker* UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker::AdaptivePerformanceScalerEfficiencyTracker()   {
}

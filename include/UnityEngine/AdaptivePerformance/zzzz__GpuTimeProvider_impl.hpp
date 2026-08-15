#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/GpuTimeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__FrameTiming_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__GpuTimeProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::GpuTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::GpuTimeProvider::*)()>(&::UnityEngine::AdaptivePerformance::GpuTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182220f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::GpuTimeProvider.get_GpuFrameTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::GpuTimeProvider::*)()>(&::UnityEngine::AdaptivePerformance::GpuTimeProvider::get_GpuFrameTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822213c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>(),
                        {"get_GpuFrameTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::GpuTimeProvider.GetLatestTimings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::AdaptivePerformance::GpuTimeProvider::*)()>(&::UnityEngine::AdaptivePerformance::GpuTimeProvider::GetLatestTimings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182220ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::GpuTimeProvider.Measure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::GpuTimeProvider::*)()>(&::UnityEngine::AdaptivePerformance::GpuTimeProvider::Measure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182220f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>(),
                        {"Measure", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::FrameTiming>& UnityEngine::AdaptivePerformance::GpuTimeProvider::__cordl_internal_get_m_FrameTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameTiming;
}
constexpr ::ArrayW<::UnityEngine::FrameTiming> const& UnityEngine::AdaptivePerformance::GpuTimeProvider::__cordl_internal_get_m_FrameTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameTiming;
}
constexpr void UnityEngine::AdaptivePerformance::GpuTimeProvider::__cordl_internal_set_m_FrameTiming(::ArrayW<::UnityEngine::FrameTiming>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameTiming = value;
}
inline void UnityEngine::AdaptivePerformance::GpuTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::GpuTimeProvider::get_GpuFrameTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>(),
                        {"get_GpuFrameTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::AdaptivePerformance::GpuTimeProvider::GetLatestTimings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::GpuTimeProvider::Measure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>(),
                        {"Measure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::GpuTimeProvider* UnityEngine::AdaptivePerformance::GpuTimeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::GpuTimeProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::GpuTimeProvider::GpuTimeProvider()   {
}

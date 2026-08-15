#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/CpuTimeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__FrameTiming_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__CpuTimeProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::CpuTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::CpuTimeProvider::*)()>(&::UnityEngine::AdaptivePerformance::CpuTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182220f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::CpuTimeProvider.get_CpuFrameTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::CpuTimeProvider::*)()>(&::UnityEngine::AdaptivePerformance::CpuTimeProvider::get_CpuFrameTime)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182220f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>(),
                        {"get_CpuFrameTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::CpuTimeProvider.GetLatestTimings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::AdaptivePerformance::CpuTimeProvider::*)()>(&::UnityEngine::AdaptivePerformance::CpuTimeProvider::GetLatestTimings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182220ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::CpuTimeProvider.Measure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::CpuTimeProvider::*)()>(&::UnityEngine::AdaptivePerformance::CpuTimeProvider::Measure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182220f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>(),
                        {"Measure", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::FrameTiming>& UnityEngine::AdaptivePerformance::CpuTimeProvider::__cordl_internal_get_m_FrameTimings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameTimings;
}
constexpr ::ArrayW<::UnityEngine::FrameTiming> const& UnityEngine::AdaptivePerformance::CpuTimeProvider::__cordl_internal_get_m_FrameTimings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameTimings;
}
constexpr void UnityEngine::AdaptivePerformance::CpuTimeProvider::__cordl_internal_set_m_FrameTimings(::ArrayW<::UnityEngine::FrameTiming>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameTimings = value;
}
inline void UnityEngine::AdaptivePerformance::CpuTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::CpuTimeProvider::get_CpuFrameTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>(),
                        {"get_CpuFrameTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::AdaptivePerformance::CpuTimeProvider::GetLatestTimings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::CpuTimeProvider::Measure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>(),
                        {"Measure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::CpuTimeProvider* UnityEngine::AdaptivePerformance::CpuTimeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::CpuTimeProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::CpuTimeProvider::CpuTimeProvider()   {
}

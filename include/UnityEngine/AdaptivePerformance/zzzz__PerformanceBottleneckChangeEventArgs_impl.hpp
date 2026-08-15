#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceBottleneckChangeEventArgs.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneck_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneckChangeEventArgs_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneck_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs.get_PerformanceBottleneck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::PerformanceBottleneck (::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs::get_PerformanceBottleneck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>(),
                        {"get_PerformanceBottleneck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs.set_PerformanceBottleneck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs::*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneck)>(&::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs::set_PerformanceBottleneck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>(),
                        {"set_PerformanceBottleneck", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneck>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::AdaptivePerformance::PerformanceBottleneck UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs::get_PerformanceBottleneck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>(),
                        {"get_PerformanceBottleneck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::PerformanceBottleneck>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs::set_PerformanceBottleneck(::UnityEngine::AdaptivePerformance::PerformanceBottleneck  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>(),
                        {"set_PerformanceBottleneck", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneck>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PerformanceBottleneck_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::PerformanceBottleneck", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs::PerformanceBottleneckChangeEventArgs(::UnityEngine::AdaptivePerformance::PerformanceBottleneck  _PerformanceBottleneck_k__BackingField) noexcept  {
this->_PerformanceBottleneck_k__BackingField = _PerformanceBottleneck_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs::PerformanceBottleneckChangeEventArgs()   {
}

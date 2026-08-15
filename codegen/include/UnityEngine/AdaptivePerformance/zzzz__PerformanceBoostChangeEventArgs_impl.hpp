#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceBoostChangeEventArgs.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBoostChangeEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs.get_CpuBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::get_CpuBoost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>(),
                        {"get_CpuBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs.set_CpuBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::*)(bool)>(&::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::set_CpuBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>(),
                        {"set_CpuBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs.get_GpuBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::get_GpuBoost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180438d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>(),
                        {"get_GpuBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs.set_GpuBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::*)(bool)>(&::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::set_GpuBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>(),
                        {"set_GpuBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::get_CpuBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>(),
                        {"get_CpuBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::set_CpuBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>(),
                        {"set_CpuBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::get_GpuBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>(),
                        {"get_GpuBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::set_GpuBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>(),
                        {"set_GpuBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_CpuBoost_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_GpuBoost_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::PerformanceBoostChangeEventArgs(bool  _CpuBoost_k__BackingField, bool  _GpuBoost_k__BackingField) noexcept  {
this->_CpuBoost_k__BackingField = _CpuBoost_k__BackingField;
this->_GpuBoost_k__BackingField = _GpuBoost_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs::PerformanceBoostChangeEventArgs()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ThermalMetrics.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__WarningLevel_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalMetrics_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__WarningLevel_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalMetrics.get_WarningLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::WarningLevel (::UnityEngine::AdaptivePerformance::ThermalMetrics::*)()>(&::UnityEngine::AdaptivePerformance::ThermalMetrics::get_WarningLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"get_WarningLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalMetrics.set_WarningLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::ThermalMetrics::*)(::UnityEngine::AdaptivePerformance::WarningLevel)>(&::UnityEngine::AdaptivePerformance::ThermalMetrics::set_WarningLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"set_WarningLevel", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::WarningLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalMetrics.get_TemperatureLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::ThermalMetrics::*)()>(&::UnityEngine::AdaptivePerformance::ThermalMetrics::get_TemperatureLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d56e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"get_TemperatureLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalMetrics.set_TemperatureLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::ThermalMetrics::*)(float_t)>(&::UnityEngine::AdaptivePerformance::ThermalMetrics::set_TemperatureLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"set_TemperatureLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalMetrics.get_TemperatureTrend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::ThermalMetrics::*)()>(&::UnityEngine::AdaptivePerformance::ThermalMetrics::get_TemperatureTrend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"get_TemperatureTrend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalMetrics.set_TemperatureTrend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::ThermalMetrics::*)(float_t)>(&::UnityEngine::AdaptivePerformance::ThermalMetrics::set_TemperatureTrend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"set_TemperatureTrend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::AdaptivePerformance::WarningLevel UnityEngine::AdaptivePerformance::ThermalMetrics::get_WarningLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"get_WarningLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::WarningLevel>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::ThermalMetrics::set_WarningLevel(::UnityEngine::AdaptivePerformance::WarningLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"set_WarningLevel", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::WarningLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::ThermalMetrics::get_TemperatureLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"get_TemperatureLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::ThermalMetrics::set_TemperatureLevel(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"set_TemperatureLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::ThermalMetrics::get_TemperatureTrend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"get_TemperatureTrend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::ThermalMetrics::set_TemperatureTrend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>(),
                        {"set_TemperatureTrend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_WarningLevel_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::WarningLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TemperatureLevel_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TemperatureTrend_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::ThermalMetrics::ThermalMetrics(::UnityEngine::AdaptivePerformance::WarningLevel  _WarningLevel_k__BackingField, float_t  _TemperatureLevel_k__BackingField, float_t  _TemperatureTrend_k__BackingField) noexcept  {
this->_WarningLevel_k__BackingField = _WarningLevel_k__BackingField;
this->_TemperatureLevel_k__BackingField = _TemperatureLevel_k__BackingField;
this->_TemperatureTrend_k__BackingField = _TemperatureTrend_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::ThermalMetrics::ThermalMetrics()   {
}

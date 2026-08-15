#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceIndexerSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceIndexerSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings.get_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::get_active)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>(),
                        {"get_active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings.get_thermalActionDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::get_thermalActionDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>(),
                        {"get_thermalActionDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings.get_performanceActionDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::get_performanceActionDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>(),
                        {"get_performanceActionDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182217040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::__cordl_internal_get_m_Active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Active;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::__cordl_internal_get_m_Active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Active;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::__cordl_internal_set_m_Active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Active = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::__cordl_internal_get_m_ThermalActionDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThermalActionDelay;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::__cordl_internal_get_m_ThermalActionDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThermalActionDelay;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::__cordl_internal_set_m_ThermalActionDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThermalActionDelay = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::__cordl_internal_get_m_PerformanceActionDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceActionDelay;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::__cordl_internal_get_m_PerformanceActionDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceActionDelay;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::__cordl_internal_set_m_PerformanceActionDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PerformanceActionDelay = value;
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::get_active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>(),
                        {"get_active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::get_thermalActionDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>(),
                        {"get_thermalActionDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::get_performanceActionDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>(),
                        {"get_performanceActionDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings* UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings::AdaptivePerformanceIndexerSettings()   {
}

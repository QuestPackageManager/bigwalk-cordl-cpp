#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/TemperatureTrend.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__TemperatureTrend_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::TemperatureTrend.PopOldestValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::TemperatureTrend::*)()>(&::UnityEngine::AdaptivePerformance::TemperatureTrend::PopOldestValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182222670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"PopOldestValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::TemperatureTrend.PushNewValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::TemperatureTrend::*)(float_t, float_t)>(&::UnityEngine::AdaptivePerformance::TemperatureTrend::PushNewValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182222700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"PushNewValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::TemperatureTrend._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::TemperatureTrend::*)(bool)>(&::UnityEngine::AdaptivePerformance::TemperatureTrend::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182222a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::TemperatureTrend.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::TemperatureTrend::*)()>(&::UnityEngine::AdaptivePerformance::TemperatureTrend::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822227a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::TemperatureTrend.get_ThermalTrend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::TemperatureTrend::*)()>(&::UnityEngine::AdaptivePerformance::TemperatureTrend::get_ThermalTrend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"get_ThermalTrend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::TemperatureTrend.set_ThermalTrend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::TemperatureTrend::*)(float_t)>(&::UnityEngine::AdaptivePerformance::TemperatureTrend::set_ThermalTrend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"set_ThermalTrend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::TemperatureTrend.UpdateTrend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::TemperatureTrend::*)()>(&::UnityEngine::AdaptivePerformance::TemperatureTrend::UpdateTrend)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822227c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"UpdateTrend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::TemperatureTrend.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::TemperatureTrend::*)(float_t, float_t, bool, float_t)>(&::UnityEngine::AdaptivePerformance::TemperatureTrend::Update)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1822228b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"Update", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_UseProviderTrend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseProviderTrend;
}
constexpr bool const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_UseProviderTrend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseProviderTrend;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_UseProviderTrend(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseProviderTrend = value;
}
constexpr double_t& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_SumX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SumX;
}
constexpr double_t const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_SumX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SumX;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_SumX(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SumX = value;
}
constexpr double_t& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_SumY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SumY;
}
constexpr double_t const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_SumY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SumY;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_SumY(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SumY = value;
}
constexpr double_t& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_SumXY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SumXY;
}
constexpr double_t const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_SumXY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SumXY;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_SumXY(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SumXY = value;
}
constexpr double_t& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_SumXX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SumXX;
}
constexpr double_t const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_SumXX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SumXX;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_SumXX(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SumXX = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_TimeStamps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeStamps;
}
constexpr ::ArrayW<float_t> const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_TimeStamps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeStamps;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_TimeStamps(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeStamps = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_Temperature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Temperature;
}
constexpr ::ArrayW<float_t> const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_Temperature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Temperature;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_Temperature(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Temperature = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_NumValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumValues;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_NumValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumValues;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_NumValues(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NumValues = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_NextValueIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextValueIndex;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_NextValueIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextValueIndex;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_NextValueIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextValueIndex = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_OldestValueIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OldestValueIndex;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get_m_OldestValueIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OldestValueIndex;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set_m_OldestValueIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OldestValueIndex = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get__ThermalTrend_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThermalTrend_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_get__ThermalTrend_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThermalTrend_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::TemperatureTrend::__cordl_internal_set__ThermalTrend_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThermalTrend_k__BackingField = value;
}
inline void UnityEngine::AdaptivePerformance::TemperatureTrend::PopOldestValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"PopOldestValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::TemperatureTrend::PushNewValue(float_t  tempLevel, float_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"PushNewValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tempLevel, timestamp);
}
inline void UnityEngine::AdaptivePerformance::TemperatureTrend::_ctor(bool  useProviderTrend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useProviderTrend);
}
inline void UnityEngine::AdaptivePerformance::TemperatureTrend::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::TemperatureTrend::get_ThermalTrend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"get_ThermalTrend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::TemperatureTrend::set_ThermalTrend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"set_ThermalTrend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::TemperatureTrend::UpdateTrend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"UpdateTrend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::TemperatureTrend::Update(float_t  temperatureTrendFromProvider, float_t  newTemperatureLevel, bool  changed, float_t  newTemperatureTimestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(),
                        {"Update", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, temperatureTrendFromProvider, newTemperatureLevel, changed, newTemperatureTimestamp);
}
inline ::UnityEngine::AdaptivePerformance::TemperatureTrend* UnityEngine::AdaptivePerformance::TemperatureTrend::New_ctor(bool  useProviderTrend)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::TemperatureTrend*>(useProviderTrend));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::TemperatureTrend::TemperatureTrend()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/RunningAverage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__RunningAverage_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::RunningAverage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::RunningAverage::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::RunningAverage::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182222610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::RunningAverage.GetNumValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::RunningAverage::*)()>(&::UnityEngine::AdaptivePerformance::RunningAverage::GetNumValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"GetNumValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::RunningAverage.GetSampleWindowSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::RunningAverage::*)()>(&::UnityEngine::AdaptivePerformance::RunningAverage::GetSampleWindowSize)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x1809d15e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"GetSampleWindowSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::RunningAverage.GetAverageOr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::RunningAverage::*)(float_t)>(&::UnityEngine::AdaptivePerformance::RunningAverage::GetAverageOr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822225b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"GetAverageOr", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::RunningAverage.GetMostRecentValueOr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::RunningAverage::*)(float_t)>(&::UnityEngine::AdaptivePerformance::RunningAverage::GetMostRecentValueOr)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822225c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"GetMostRecentValueOr", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::RunningAverage.AddValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::RunningAverage::*)(float_t)>(&::UnityEngine::AdaptivePerformance::RunningAverage::AddValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182222540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"AddValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::RunningAverage.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::RunningAverage::*)()>(&::UnityEngine::AdaptivePerformance::RunningAverage::Reset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822225e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_get_m_Values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Values;
}
constexpr ::ArrayW<float_t> const& UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_get_m_Values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Values;
}
constexpr void UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_set_m_Values(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Values = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_get_m_NumValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumValues;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_get_m_NumValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumValues;
}
constexpr void UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_set_m_NumValues(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NumValues = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_get_m_LastIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastIndex;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_get_m_LastIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastIndex;
}
constexpr void UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_set_m_LastIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastIndex = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_get_m_AverageValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AverageValue;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_get_m_AverageValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AverageValue;
}
constexpr void UnityEngine::AdaptivePerformance::RunningAverage::__cordl_internal_set_m_AverageValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AverageValue = value;
}
inline void UnityEngine::AdaptivePerformance::RunningAverage::_ctor(int32_t  sampleWindowSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleWindowSize);
}
inline int32_t UnityEngine::AdaptivePerformance::RunningAverage::GetNumValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"GetNumValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::RunningAverage::GetSampleWindowSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"GetSampleWindowSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::RunningAverage::GetAverageOr(float_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"GetAverageOr", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, defaultValue);
}
inline float_t UnityEngine::AdaptivePerformance::RunningAverage::GetMostRecentValueOr(float_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"GetMostRecentValueOr", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, defaultValue);
}
inline void UnityEngine::AdaptivePerformance::RunningAverage::AddValue(float_t  NewValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"AddValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, NewValue);
}
inline void UnityEngine::AdaptivePerformance::RunningAverage::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::RunningAverage* UnityEngine::AdaptivePerformance::RunningAverage::New_ctor(int32_t  sampleWindowSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::RunningAverage*>(sampleWindowSize));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::RunningAverage::RunningAverage()   {
}

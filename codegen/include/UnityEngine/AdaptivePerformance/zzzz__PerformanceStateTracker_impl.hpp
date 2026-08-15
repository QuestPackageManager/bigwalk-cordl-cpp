#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceStateTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceStateTracker_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__StateAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceStateTracker.get_Trend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::PerformanceStateTracker::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceStateTracker::get_Trend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(),
                        {"get_Trend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceStateTracker.set_Trend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceStateTracker::*)(float_t)>(&::UnityEngine::AdaptivePerformance::PerformanceStateTracker::set_Trend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(),
                        {"set_Trend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceStateTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceStateTracker::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::PerformanceStateTracker::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822224e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceStateTracker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::StateAction (::UnityEngine::AdaptivePerformance::PerformanceStateTracker::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceStateTracker::Update)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1822222f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceStateTracker.GetEffectiveTargetFrameRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::PerformanceStateTracker::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceStateTracker::GetEffectiveTargetFrameRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182219da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<float_t>*& UnityEngine::AdaptivePerformance::PerformanceStateTracker::__cordl_internal_get_m_Samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Samples;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>* const& UnityEngine::AdaptivePerformance::PerformanceStateTracker::__cordl_internal_get_m_Samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Samples;
}
constexpr void UnityEngine::AdaptivePerformance::PerformanceStateTracker::__cordl_internal_set_m_Samples(::System::Collections::Generic::Queue_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Samples = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::PerformanceStateTracker::__cordl_internal_get_m_SampleCapacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleCapacity;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::PerformanceStateTracker::__cordl_internal_get_m_SampleCapacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleCapacity;
}
constexpr void UnityEngine::AdaptivePerformance::PerformanceStateTracker::__cordl_internal_set_m_SampleCapacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SampleCapacity = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::PerformanceStateTracker::__cordl_internal_get__Trend_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Trend_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::PerformanceStateTracker::__cordl_internal_get__Trend_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Trend_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::PerformanceStateTracker::__cordl_internal_set__Trend_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Trend_k__BackingField = value;
}
inline float_t UnityEngine::AdaptivePerformance::PerformanceStateTracker::get_Trend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(),
                        {"get_Trend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceStateTracker::set_Trend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(),
                        {"set_Trend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::PerformanceStateTracker::_ctor(int32_t  sampleCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleCapacity);
}
inline ::UnityEngine::AdaptivePerformance::StateAction UnityEngine::AdaptivePerformance::PerformanceStateTracker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::StateAction>(this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::PerformanceStateTracker::GetEffectiveTargetFrameRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceStateTracker* UnityEngine::AdaptivePerformance::PerformanceStateTracker::New_ctor(int32_t  sampleCapacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>(sampleCapacity));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceStateTracker::PerformanceStateTracker()   {
}

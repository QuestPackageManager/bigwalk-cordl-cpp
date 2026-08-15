#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ThermalStateTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalStateTracker_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__StateAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalStateTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::ThermalStateTracker::*)()>(&::UnityEngine::AdaptivePerformance::ThermalStateTracker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182222d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalStateTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalStateTracker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::StateAction (::UnityEngine::AdaptivePerformance::ThermalStateTracker::*)()>(&::UnityEngine::AdaptivePerformance::ThermalStateTracker::Update)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x182222ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalStateTracker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::AdaptivePerformance::ThermalStateTracker::__cordl_internal_get_warningTemp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningTemp;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::ThermalStateTracker::__cordl_internal_get_warningTemp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningTemp;
}
constexpr void UnityEngine::AdaptivePerformance::ThermalStateTracker::__cordl_internal_set_warningTemp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningTemp = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::ThermalStateTracker::__cordl_internal_get_throttlingTemp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throttlingTemp;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::ThermalStateTracker::__cordl_internal_get_throttlingTemp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throttlingTemp;
}
constexpr void UnityEngine::AdaptivePerformance::ThermalStateTracker::__cordl_internal_set_throttlingTemp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throttlingTemp = value;
}
inline void UnityEngine::AdaptivePerformance::ThermalStateTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalStateTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::StateAction UnityEngine::AdaptivePerformance::ThermalStateTracker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalStateTracker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::StateAction>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::ThermalStateTracker* UnityEngine::AdaptivePerformance::ThermalStateTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::ThermalStateTracker*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::ThermalStateTracker::ThermalStateTracker()   {
}

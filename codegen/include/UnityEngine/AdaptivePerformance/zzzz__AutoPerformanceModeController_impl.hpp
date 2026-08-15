#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AutoPerformanceModeController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AutoPerformanceModeController_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IPerformanceModeStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceModeController::*)(::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceModeController::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182220bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController.OnPerformanceModeChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceModeController::*)(::UnityEngine::AdaptivePerformance::PerformanceMode)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceModeController::OnPerformanceModeChange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182220b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*>(),
                        {"OnPerformanceModeChange", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController.__ctor_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceModeController::*)(::UnityEngine::AdaptivePerformance::PerformanceMode)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceModeController::__ctor_b__1_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182220b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*>(),
                        {"<.ctor>b__1_0", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceMode>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AdaptivePerformance::AutoPerformanceModeController::__cordl_internal_get_m_FeatureName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FeatureName;
}
constexpr ::StringW const& UnityEngine::AdaptivePerformance::AutoPerformanceModeController::__cordl_internal_get_m_FeatureName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FeatureName;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceModeController::__cordl_internal_set_m_FeatureName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FeatureName = value;
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceModeController::_ctor(::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*  perfModeStat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, perfModeStat);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceModeController::OnPerformanceModeChange(::UnityEngine::AdaptivePerformance::PerformanceMode  performanceMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*>(),
                        {"OnPerformanceModeChange", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, performanceMode);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceModeController::__ctor_b__1_0(::UnityEngine::AdaptivePerformance::PerformanceMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*>(),
                        {"<.ctor>b__1_0", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController* UnityEngine::AdaptivePerformance::AutoPerformanceModeController::New_ctor(::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*  perfModeStat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*>(perfModeStat));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController::AutoPerformanceModeController()   {
}

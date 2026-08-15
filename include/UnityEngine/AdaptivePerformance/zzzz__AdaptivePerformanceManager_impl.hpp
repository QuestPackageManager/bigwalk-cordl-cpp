#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceManager.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__FrameTiming_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMetrics_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMode_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalMetrics_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceManager_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__AdaptivePerformanceSubsystem_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__IApplicationLifecycle_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceIndexer_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AutoPerformanceLevelController_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AutoPerformanceModeController_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__CpuTimeProvider_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__DevicePerformanceControlImpl_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__FrameTiming_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__GpuTimeProvider_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformanceSettings_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformance_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IDevelopmentSettings_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IDevicePerformanceControl_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IPerformanceModeStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IPerformanceStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IThermalStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBoostChangeEventArgs_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBoostChangeHandler_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneckChangeEventArgs_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneckChangeHandler_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceControlMode_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceLevelChangeEventArgs_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceLevelChangeHandler_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMetrics_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceModeEventHandler_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMode_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__RunningAverage_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__TemperatureTrend_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalEventHandler_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalMetrics_def.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.add_ThermalEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::ThermalEventHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_ThermalEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221c900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_ThermalEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.remove_ThermalEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::ThermalEventHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_ThermalEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221cda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_ThermalEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.add_PerformanceBottleneckChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_PerformanceBottleneckChangeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_PerformanceBottleneckChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.remove_PerformanceBottleneckChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_PerformanceBottleneckChangeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_PerformanceBottleneckChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.add_PerformanceLevelChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_PerformanceLevelChangeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221c800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_PerformanceLevelChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.remove_PerformanceLevelChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_PerformanceLevelChangeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221cca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_PerformanceLevelChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.add_PerformanceBoostChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_PerformanceBoostChangeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221c700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_PerformanceBoostChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.remove_PerformanceBoostChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_PerformanceBoostChangeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221cba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_PerformanceBoostChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.add_PerformanceModeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_PerformanceModeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221c880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_PerformanceModeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.remove_PerformanceModeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_PerformanceModeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221cd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_PerformanceModeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_ThermalMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::ThermalMetrics (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_ThermalMetrics)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18221cb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_ThermalMetrics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_PerformanceMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::PerformanceMetrics (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceMetrics)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18221cb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceMetrics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_FrameTiming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::FrameTiming (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_FrameTiming)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18221c9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_FrameTiming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_PerformanceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::PerformanceMode (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181561f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_Logging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Logging)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18221ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Logging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.set_Logging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(bool)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_Logging)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18221ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_Logging", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_LoggingFrequencyInFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_LoggingFrequencyInFrames)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180408b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_LoggingFrequencyInFrames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.set_LoggingFrequencyInFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_LoggingFrequencyInFrames)> {
  constexpr static std::size_t size = 0x2630;
  constexpr static std::size_t addrs = 0x180b9feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_LoggingFrequencyInFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Initialized)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Active)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18221c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_MaxCpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_MaxCpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18221cad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_MaxCpuPerformanceLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_MaxGpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_MaxGpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18221cb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_MaxGpuPerformanceLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_AutomaticPerformanceControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_AutomaticPerformanceControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fc8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_AutomaticPerformanceControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.set_AutomaticPerformanceControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(bool)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_AutomaticPerformanceControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18221ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_AutomaticPerformanceControl", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_PerformanceControlMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::PerformanceControlMode (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceControlMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18221cb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceControlMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_CpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_CpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180e25b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_CpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.set_CpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_CpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18221ce30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_CpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_GpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_GpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_GpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.set_GpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_GpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18221ce50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_GpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_CpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_CpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d20b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_CpuPerformanceBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.set_CpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(bool)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_CpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18221ce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_CpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_GpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_GpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816ea340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_GpuPerformanceBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.set_GpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(bool)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_GpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18221ce60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_GpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_DevelopmentSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::IDevelopmentSettings* (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_DevelopmentSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_DevelopmentSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_ThermalStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::IThermalStatus* (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_ThermalStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_ThermalStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_PerformanceStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::IPerformanceStatus* (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_DevicePerformanceControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl* (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_DevicePerformanceControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_DevicePerformanceControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_PerformanceModeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus* (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceModeStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceModeStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_Indexer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Indexer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Indexer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.set_Indexer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_Indexer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_Indexer", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Settings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.set_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_Settings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_Settings", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.get_Subsystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem* (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Subsystem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Subsystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.HasFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AdaptivePerformance::Provider::Feature, ::UnityEngine::AdaptivePerformance::Provider::Feature)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::HasFeature)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cce090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"HasFeature", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::Feature>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::Feature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.SupportedFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::Provider::Feature)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::SupportedFeature)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18221b700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"SupportedFeature", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::Feature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822194c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.LogThermalEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::ThermalMetrics)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogThermalEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18221b480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogThermalEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.LogBottleneckEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogBottleneckEvent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18221b240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogBottleneckEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.LogBoostEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogBoostEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18221b1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogBoostEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.LogPerformanceModeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceMode)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogPerformanceModeEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18221b3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogPerformanceModeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.LogAdaptivePerformanceStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogAdaptivePerformanceStatus)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x18221ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogAdaptivePerformanceStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.ToStringWithSign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::ToStringWithSign)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18221b740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"ToStringWithSign", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.LogPerformanceLevelEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogPerformanceLevelEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18221b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogPerformanceLevelEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.AddNonNegativeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::UnityEngine::AdaptivePerformance::RunningAverage*, float_t)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::AddNonNegativeValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182219310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"AddNonNegativeValue", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LateUpdate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18221aa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::Update)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18221c1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.CollectProfilerStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::CollectProfilerStats)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1822195e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"CollectProfilerStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.AppendFrameTiming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::StringW, float_t, float_t)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::AppendFrameTiming)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822193a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"AppendFrameTiming", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.AccumulateTimingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(::by_ref<float_t>, float_t)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::AccumulateTimingValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822192e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"AccumulateTimingValue", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.UpdateSubsystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::UpdateSubsystem)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0x18221b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"UpdateSubsystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.WillCurrentFrameRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::WillCurrentFrameRender)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18221c4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"WillCurrentFrameRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.EffectiveTargetFrameRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::EffectiveTargetFrameRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182219da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"EffectiveTargetFrameRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18221b640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.InitializeAdaptivePerformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::InitializeAdaptivePerformance)> {
  constexpr static std::size_t size = 0xc90;
  constexpr static std::size_t addrs = 0x182219dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"InitializeAdaptivePerformance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.StartAdaptivePerformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::StartAdaptivePerformance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18221b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"StartAdaptivePerformance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.StopAdaptivePerformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::StopAdaptivePerformance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18221b690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"StopAdaptivePerformance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.DeinitializeAdaptivePerformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::DeinitializeAdaptivePerformance)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x1822197e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"DeinitializeAdaptivePerformance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)(bool)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18221b540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18221c4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AdaptivePerformance::ThermalEventHandler*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_ThermalEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThermalEvent;
}
constexpr ::UnityEngine::AdaptivePerformance::ThermalEventHandler* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_ThermalEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThermalEvent;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_ThermalEvent(::UnityEngine::AdaptivePerformance::ThermalEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThermalEvent = value;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_PerformanceBottleneckChangeEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceBottleneckChangeEvent;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_PerformanceBottleneckChangeEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceBottleneckChangeEvent;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PerformanceBottleneckChangeEvent = value;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_PerformanceLevelChangeEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceLevelChangeEvent;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_PerformanceLevelChangeEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceLevelChangeEvent;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_PerformanceLevelChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PerformanceLevelChangeEvent = value;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_PerformanceBoostChangeEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceBoostChangeEvent;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_PerformanceBoostChangeEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceBoostChangeEvent;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_PerformanceBoostChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PerformanceBoostChangeEvent = value;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_PerformanceModeEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceModeEvent;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_PerformanceModeEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceModeEvent;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PerformanceModeEvent = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_JustResumed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JustResumed;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_JustResumed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JustResumed;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_JustResumed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JustResumed = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_RequestedCpuLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedCpuLevel;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_RequestedCpuLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedCpuLevel;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_RequestedCpuLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RequestedCpuLevel = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_RequestedGpuLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedGpuLevel;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_RequestedGpuLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedGpuLevel;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_RequestedGpuLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RequestedGpuLevel = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_NewUserPerformanceLevelRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NewUserPerformanceLevelRequest;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_NewUserPerformanceLevelRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NewUserPerformanceLevelRequest;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_NewUserPerformanceLevelRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NewUserPerformanceLevelRequest = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_RequestedCpuBoost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedCpuBoost;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_RequestedCpuBoost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedCpuBoost;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_RequestedCpuBoost(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RequestedCpuBoost = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_RequestedGpuBoost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedGpuBoost;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_RequestedGpuBoost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedGpuBoost;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_RequestedGpuBoost(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RequestedGpuBoost = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_NewUserCpuPerformanceBoostRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NewUserCpuPerformanceBoostRequest;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_NewUserCpuPerformanceBoostRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NewUserCpuPerformanceBoostRequest;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_NewUserCpuPerformanceBoostRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NewUserCpuPerformanceBoostRequest = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_NewUserGpuPerformanceBoostRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NewUserGpuPerformanceBoostRequest;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_NewUserGpuPerformanceBoostRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NewUserGpuPerformanceBoostRequest;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_NewUserGpuPerformanceBoostRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NewUserGpuPerformanceBoostRequest = value;
}
constexpr ::UnityEngine::AdaptivePerformance::ThermalMetrics& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_ThermalMetrics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThermalMetrics;
}
constexpr ::UnityEngine::AdaptivePerformance::ThermalMetrics const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_ThermalMetrics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThermalMetrics;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_ThermalMetrics(::UnityEngine::AdaptivePerformance::ThermalMetrics  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThermalMetrics = value;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMetrics& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_PerformanceMetrics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceMetrics;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMetrics const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_PerformanceMetrics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceMetrics;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_PerformanceMetrics(::UnityEngine::AdaptivePerformance::PerformanceMetrics  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PerformanceMetrics = value;
}
constexpr ::UnityEngine::AdaptivePerformance::FrameTiming& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_FrameTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameTiming;
}
constexpr ::UnityEngine::AdaptivePerformance::FrameTiming const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_FrameTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameTiming;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_FrameTiming(::UnityEngine::AdaptivePerformance::FrameTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameTiming = value;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_PerformanceMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceMode;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_PerformanceMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceMode;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_PerformanceMode(::UnityEngine::AdaptivePerformance::PerformanceMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PerformanceMode = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get__LoggingFrequencyInFrames_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoggingFrequencyInFrames_k__BackingField;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get__LoggingFrequencyInFrames_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoggingFrequencyInFrames_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set__LoggingFrequencyInFrames_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LoggingFrequencyInFrames_k__BackingField = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AutomaticPerformanceControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticPerformanceControl;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AutomaticPerformanceControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticPerformanceControl;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_AutomaticPerformanceControl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutomaticPerformanceControl = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AutomaticPerformanceControlChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticPerformanceControlChanged;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AutomaticPerformanceControlChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticPerformanceControlChanged;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_AutomaticPerformanceControlChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutomaticPerformanceControlChanged = value;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get__Indexer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Indexer_k__BackingField;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get__Indexer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Indexer_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set__Indexer_k__BackingField(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Indexer_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_Settings(::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
constexpr ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_Subsystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Subsystem;
}
constexpr ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_Subsystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Subsystem;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_Subsystem(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Subsystem = value;
}
constexpr ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_DevicePerfControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DevicePerfControl;
}
constexpr ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_DevicePerfControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DevicePerfControl;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_DevicePerfControl(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DevicePerfControl = value;
}
constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AutoPerformanceLevelController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoPerformanceLevelController;
}
constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AutoPerformanceLevelController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoPerformanceLevelController;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_AutoPerformanceLevelController(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoPerformanceLevelController = value;
}
constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AutoPerformanceModeController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoPerformanceModeController;
}
constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AutoPerformanceModeController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoPerformanceModeController;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_AutoPerformanceModeController(::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoPerformanceModeController = value;
}
constexpr ::UnityEngine::AdaptivePerformance::CpuTimeProvider*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_CpuFrameTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CpuFrameTimeProvider;
}
constexpr ::UnityEngine::AdaptivePerformance::CpuTimeProvider* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_CpuFrameTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CpuFrameTimeProvider;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_CpuFrameTimeProvider(::UnityEngine::AdaptivePerformance::CpuTimeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CpuFrameTimeProvider = value;
}
constexpr ::UnityEngine::AdaptivePerformance::GpuTimeProvider*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_GpuFrameTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GpuFrameTimeProvider;
}
constexpr ::UnityEngine::AdaptivePerformance::GpuTimeProvider* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_GpuFrameTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GpuFrameTimeProvider;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_GpuFrameTimeProvider(::UnityEngine::AdaptivePerformance::GpuTimeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GpuFrameTimeProvider = value;
}
constexpr ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AppLifecycle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AppLifecycle;
}
constexpr ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_AppLifecycle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AppLifecycle;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_AppLifecycle(::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AppLifecycle = value;
}
constexpr ::UnityEngine::AdaptivePerformance::TemperatureTrend*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_TemperatureTrend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TemperatureTrend;
}
constexpr ::UnityEngine::AdaptivePerformance::TemperatureTrend* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_TemperatureTrend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TemperatureTrend;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_TemperatureTrend(::UnityEngine::AdaptivePerformance::TemperatureTrend*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TemperatureTrend = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_UseProviderOverallFrameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseProviderOverallFrameTime;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_UseProviderOverallFrameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseProviderOverallFrameTime;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_UseProviderOverallFrameTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseProviderOverallFrameTime = value;
}
constexpr ::UnityEngine::WaitForEndOfFrame*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_WaitForEndOfFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitForEndOfFrame;
}
constexpr ::UnityEngine::WaitForEndOfFrame* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_WaitForEndOfFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitForEndOfFrame;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_WaitForEndOfFrame(::UnityEngine::WaitForEndOfFrame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WaitForEndOfFrame = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_FrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameCount;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_FrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameCount;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_FrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameCount = value;
}
constexpr ::UnityEngine::AdaptivePerformance::RunningAverage*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_OverallFrameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverallFrameTime;
}
constexpr ::UnityEngine::AdaptivePerformance::RunningAverage* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_OverallFrameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverallFrameTime;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_OverallFrameTime(::UnityEngine::AdaptivePerformance::RunningAverage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverallFrameTime = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_OverallFrameTimeAccu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverallFrameTimeAccu;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_OverallFrameTimeAccu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverallFrameTimeAccu;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_OverallFrameTimeAccu(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverallFrameTimeAccu = value;
}
constexpr ::UnityEngine::AdaptivePerformance::RunningAverage*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_GpuFrameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GpuFrameTime;
}
constexpr ::UnityEngine::AdaptivePerformance::RunningAverage* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_GpuFrameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GpuFrameTime;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_GpuFrameTime(::UnityEngine::AdaptivePerformance::RunningAverage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GpuFrameTime = value;
}
constexpr ::UnityEngine::AdaptivePerformance::RunningAverage*& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_CpuFrameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CpuFrameTime;
}
constexpr ::UnityEngine::AdaptivePerformance::RunningAverage* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_get_m_CpuFrameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CpuFrameTime;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::__cordl_internal_set_m_CpuFrameTime(::UnityEngine::AdaptivePerformance::RunningAverage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CpuFrameTime = value;
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_ThermalEvent(::UnityEngine::AdaptivePerformance::ThermalEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_ThermalEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_ThermalEvent(::UnityEngine::AdaptivePerformance::ThermalEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_ThermalEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_PerformanceBottleneckChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_PerformanceBottleneckChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_PerformanceLevelChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_PerformanceLevelChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_PerformanceLevelChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_PerformanceLevelChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_PerformanceBoostChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_PerformanceBoostChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_PerformanceBoostChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_PerformanceBoostChangeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::add_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"add_PerformanceModeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::remove_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"remove_PerformanceModeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::ThermalMetrics UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_ThermalMetrics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_ThermalMetrics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::ThermalMetrics>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceMetrics UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceMetrics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceMetrics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::FrameTiming UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_FrameTiming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_FrameTiming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::FrameTiming>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceMode UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::PerformanceMode>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Logging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Logging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_Logging(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_Logging", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_LoggingFrequencyInFrames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_LoggingFrequencyInFrames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_LoggingFrequencyInFrames(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_LoggingFrequencyInFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_MaxCpuPerformanceLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_MaxCpuPerformanceLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_MaxGpuPerformanceLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_MaxGpuPerformanceLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_AutomaticPerformanceControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_AutomaticPerformanceControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_AutomaticPerformanceControl(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_AutomaticPerformanceControl", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceControlMode UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceControlMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceControlMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::PerformanceControlMode>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_CpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_CpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_CpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_CpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_GpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_GpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_GpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_GpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_CpuPerformanceBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_CpuPerformanceBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_CpuPerformanceBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_CpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_GpuPerformanceBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_GpuPerformanceBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_GpuPerformanceBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_GpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::IDevelopmentSettings* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_DevelopmentSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_DevelopmentSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::IDevelopmentSettings*>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::IThermalStatus* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_ThermalStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_ThermalStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::IThermalStatus*>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::IPerformanceStatus* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_DevicePerformanceControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_DevicePerformanceControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::IPerformanceModeStatus* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_PerformanceModeStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_PerformanceModeStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Indexer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Indexer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_Indexer(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_Indexer", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::set_Settings(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"set_Settings", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::get_Subsystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"get_Subsystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::HasFeature(::UnityEngine::AdaptivePerformance::Provider::Feature  flags, ::UnityEngine::AdaptivePerformance::Provider::Feature  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"HasFeature", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::Feature>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::Feature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags, feature);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::SupportedFeature(::UnityEngine::AdaptivePerformance::Provider::Feature  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"SupportedFeature", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::Feature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, feature);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogThermalEvent(::UnityEngine::AdaptivePerformance::ThermalMetrics  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogThermalEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::ThermalMetrics>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogBottleneckEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogBottleneckEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogBoostEvent(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogBoostEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogPerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceMode  performanceMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogPerformanceModeEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, performanceMode);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogAdaptivePerformanceStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogAdaptivePerformanceStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::ToStringWithSign(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"ToStringWithSign", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, x);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LogPerformanceLevelEvent(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LogPerformanceLevelEvent", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::AddNonNegativeValue(::UnityEngine::AdaptivePerformance::RunningAverage*  runningAverage, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"AddNonNegativeValue", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::RunningAverage*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runningAverage, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::CollectProfilerStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"CollectProfilerStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::AppendFrameTiming(::StringW  label, float_t  averageSeconds, float_t  currentSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"AppendFrameTiming", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, averageSeconds, currentSeconds);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::AccumulateTimingValue(::by_ref<float_t>  accu, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"AccumulateTimingValue", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accu, newValue);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::UpdateSubsystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"UpdateSubsystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::WillCurrentFrameRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"WillCurrentFrameRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::EffectiveTargetFrameRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"EffectiveTargetFrameRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::InitializeAdaptivePerformance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"InitializeAdaptivePerformance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::StartAdaptivePerformance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"StartAdaptivePerformance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::StopAdaptivePerformance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"StopAdaptivePerformance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::DeinitializeAdaptivePerformance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"DeinitializeAdaptivePerformance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::OnApplicationPause(bool  pause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*>());
}
/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IAdaptivePerformance"
constexpr  UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::operator ::UnityEngine::AdaptivePerformance::IAdaptivePerformance*() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AdaptivePerformance::IAdaptivePerformance"
constexpr ::UnityEngine::AdaptivePerformance::IAdaptivePerformance* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::i___UnityEngine__AdaptivePerformance__IAdaptivePerformance() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IThermalStatus"
constexpr  UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::operator ::UnityEngine::AdaptivePerformance::IThermalStatus*() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IThermalStatus*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AdaptivePerformance::IThermalStatus"
constexpr ::UnityEngine::AdaptivePerformance::IThermalStatus* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::i___UnityEngine__AdaptivePerformance__IThermalStatus() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IThermalStatus*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IPerformanceStatus"
constexpr  UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::operator ::UnityEngine::AdaptivePerformance::IPerformanceStatus*() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AdaptivePerformance::IPerformanceStatus"
constexpr ::UnityEngine::AdaptivePerformance::IPerformanceStatus* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::i___UnityEngine__AdaptivePerformance__IPerformanceStatus() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IDevicePerformanceControl"
constexpr  UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::operator ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AdaptivePerformance::IDevicePerformanceControl"
constexpr ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::i___UnityEngine__AdaptivePerformance__IDevicePerformanceControl() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IDevelopmentSettings"
constexpr  UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::operator ::UnityEngine::AdaptivePerformance::IDevelopmentSettings*() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IDevelopmentSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AdaptivePerformance::IDevelopmentSettings"
constexpr ::UnityEngine::AdaptivePerformance::IDevelopmentSettings* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::i___UnityEngine__AdaptivePerformance__IDevelopmentSettings() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IDevelopmentSettings*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IPerformanceModeStatus"
constexpr  UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::operator ::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AdaptivePerformance::IPerformanceModeStatus"
constexpr ::UnityEngine::AdaptivePerformance::IPerformanceModeStatus* UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::i___UnityEngine__AdaptivePerformance__IPerformanceModeStatus() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager::AdaptivePerformanceManager()   {
}

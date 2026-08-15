#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AutoPerformanceLevelController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AutoPerformanceLevelController_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IDevicePerformanceControl_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IPerformanceStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IThermalStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneckChangeEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.get_TargetFrameTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_TargetFrameTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_TargetFrameTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.set_TargetFrameTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_TargetFrameTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_TargetFrameTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.get_AllowedCpuActiveTimeRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_AllowedCpuActiveTimeRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_AllowedCpuActiveTimeRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.set_AllowedCpuActiveTimeRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_AllowedCpuActiveTimeRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_AllowedCpuActiveTimeRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.get_AllowedGpuActiveTimeRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_AllowedGpuActiveTimeRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_AllowedGpuActiveTimeRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.set_AllowedGpuActiveTimeRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_AllowedGpuActiveTimeRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_AllowedGpuActiveTimeRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.get_GpuLevelBounceAvoidanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_GpuLevelBounceAvoidanceThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_GpuLevelBounceAvoidanceThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.set_GpuLevelBounceAvoidanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_GpuLevelBounceAvoidanceThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_GpuLevelBounceAvoidanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.get_CpuLevelBounceAvoidanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_CpuLevelBounceAvoidanceThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_CpuLevelBounceAvoidanceThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.set_CpuLevelBounceAvoidanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_CpuLevelBounceAvoidanceThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_CpuLevelBounceAvoidanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.get_UpdateInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_UpdateInterval)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_UpdateInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.set_UpdateInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_UpdateInterval)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_UpdateInterval", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.get_MinTargetFrameRateHitTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_MinTargetFrameRateHitTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_MinTargetFrameRateHitTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.set_MinTargetFrameRateHitTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_MinTargetFrameRateHitTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_MinTargetFrameRateHitTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.get_MaxTemperatureLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_MaxTemperatureLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_MaxTemperatureLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.set_MaxTemperatureLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_MaxTemperatureLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_MaxTemperatureLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*, ::UnityEngine::AdaptivePerformance::IPerformanceStatus*, ::UnityEngine::AdaptivePerformance::IThermalStatus*)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x182220990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::IThermalStatus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_Enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049d330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(bool)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_Enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182220b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182220960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.Override
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(int32_t, int32_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::Override)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182220380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"Override", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.UpdateImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::UpdateImpl)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1822205a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"UpdateImpl", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.OnBottleneckChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::OnBottleneckChange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182220330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"OnBottleneckChange", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.RaiseGpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::RaiseGpuLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822204e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"RaiseGpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.RaiseCpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::RaiseCpuLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182220420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"RaiseCpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.LowerCpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::LowerCpuLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822201b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"LowerCpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.LowerGpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::LowerGpuLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182220270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"LowerGpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.AllowLowerCpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowLowerCpuLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18221fe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowLowerCpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.AllowLowerGpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowLowerGpuLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18221fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowLowerGpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.AllowRaiseLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowRaiseLevels)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182220050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowRaiseLevels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.AllowRaiseCpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowRaiseCpuLevel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18221ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowRaiseCpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.AllowRaiseGpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)()>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowRaiseGpuLevel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18221fff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowRaiseGpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController.__ctor_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs)>(&::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__ctor_b__43_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182220330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"<.ctor>b__43_0", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_PerfControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerfControl;
}
constexpr ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl* const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_PerfControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerfControl;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_PerfControl(::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PerfControl = value;
}
constexpr ::UnityEngine::AdaptivePerformance::IPerformanceStatus*& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_PerfStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerfStats;
}
constexpr ::UnityEngine::AdaptivePerformance::IPerformanceStatus* const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_PerfStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerfStats;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_PerfStats(::UnityEngine::AdaptivePerformance::IPerformanceStatus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PerfStats = value;
}
constexpr ::UnityEngine::AdaptivePerformance::IThermalStatus*& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_ThermalStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThermalStats;
}
constexpr ::UnityEngine::AdaptivePerformance::IThermalStatus* const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_ThermalStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThermalStats;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_ThermalStats(::UnityEngine::AdaptivePerformance::IThermalStatus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThermalStats = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_LastChangeTimeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastChangeTimeStamp;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_LastChangeTimeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastChangeTimeStamp;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_LastChangeTimeStamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastChangeTimeStamp = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_LastGpuLevelRaiseTimeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastGpuLevelRaiseTimeStamp;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_LastGpuLevelRaiseTimeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastGpuLevelRaiseTimeStamp;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_LastGpuLevelRaiseTimeStamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastGpuLevelRaiseTimeStamp = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_LastCpuLevelRaiseTimeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastCpuLevelRaiseTimeStamp;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_LastCpuLevelRaiseTimeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastCpuLevelRaiseTimeStamp;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_LastCpuLevelRaiseTimeStamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastCpuLevelRaiseTimeStamp = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_TargetFrameRateHitTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetFrameRateHitTimestamp;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_TargetFrameRateHitTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetFrameRateHitTimestamp;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_TargetFrameRateHitTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetFrameRateHitTimestamp = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_BottleneckUnknownTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BottleneckUnknownTimestamp;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_BottleneckUnknownTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BottleneckUnknownTimestamp;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_BottleneckUnknownTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BottleneckUnknownTimestamp = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_TriedToResolveUnknownBottleneck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriedToResolveUnknownBottleneck;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_TriedToResolveUnknownBottleneck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriedToResolveUnknownBottleneck;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_TriedToResolveUnknownBottleneck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriedToResolveUnknownBottleneck = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enabled;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enabled;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Enabled = value;
}
constexpr ::StringW& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_FeatureName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FeatureName;
}
constexpr ::StringW const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get_m_FeatureName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FeatureName;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set_m_FeatureName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FeatureName = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__TargetFrameTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetFrameTime_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__TargetFrameTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetFrameTime_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set__TargetFrameTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TargetFrameTime_k__BackingField = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__AllowedCpuActiveTimeRatio_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowedCpuActiveTimeRatio_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__AllowedCpuActiveTimeRatio_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowedCpuActiveTimeRatio_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set__AllowedCpuActiveTimeRatio_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowedCpuActiveTimeRatio_k__BackingField = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__AllowedGpuActiveTimeRatio_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowedGpuActiveTimeRatio_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__AllowedGpuActiveTimeRatio_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowedGpuActiveTimeRatio_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set__AllowedGpuActiveTimeRatio_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowedGpuActiveTimeRatio_k__BackingField = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__GpuLevelBounceAvoidanceThreshold_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GpuLevelBounceAvoidanceThreshold_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__GpuLevelBounceAvoidanceThreshold_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GpuLevelBounceAvoidanceThreshold_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set__GpuLevelBounceAvoidanceThreshold_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GpuLevelBounceAvoidanceThreshold_k__BackingField = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__CpuLevelBounceAvoidanceThreshold_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CpuLevelBounceAvoidanceThreshold_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__CpuLevelBounceAvoidanceThreshold_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CpuLevelBounceAvoidanceThreshold_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set__CpuLevelBounceAvoidanceThreshold_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CpuLevelBounceAvoidanceThreshold_k__BackingField = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__UpdateInterval_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateInterval_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__UpdateInterval_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateInterval_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set__UpdateInterval_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateInterval_k__BackingField = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__MinTargetFrameRateHitTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinTargetFrameRateHitTime_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__MinTargetFrameRateHitTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinTargetFrameRateHitTime_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set__MinTargetFrameRateHitTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinTargetFrameRateHitTime_k__BackingField = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__MaxTemperatureLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxTemperatureLevel_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_get__MaxTemperatureLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxTemperatureLevel_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__cordl_internal_set__MaxTemperatureLevel_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxTemperatureLevel_k__BackingField = value;
}
inline float_t UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_TargetFrameTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_TargetFrameTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_TargetFrameTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_TargetFrameTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_AllowedCpuActiveTimeRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_AllowedCpuActiveTimeRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_AllowedCpuActiveTimeRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_AllowedCpuActiveTimeRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_AllowedGpuActiveTimeRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_AllowedGpuActiveTimeRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_AllowedGpuActiveTimeRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_AllowedGpuActiveTimeRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_GpuLevelBounceAvoidanceThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_GpuLevelBounceAvoidanceThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_GpuLevelBounceAvoidanceThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_GpuLevelBounceAvoidanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_CpuLevelBounceAvoidanceThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_CpuLevelBounceAvoidanceThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_CpuLevelBounceAvoidanceThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_CpuLevelBounceAvoidanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_UpdateInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_UpdateInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_UpdateInterval(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_UpdateInterval", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_MinTargetFrameRateHitTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_MinTargetFrameRateHitTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_MinTargetFrameRateHitTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_MinTargetFrameRateHitTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_MaxTemperatureLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_MaxTemperatureLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_MaxTemperatureLevel(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_MaxTemperatureLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::_ctor(::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*  perfControl, ::UnityEngine::AdaptivePerformance::IPerformanceStatus*  perfStat, ::UnityEngine::AdaptivePerformance::IThermalStatus*  thermalStat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::IThermalStatus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, perfControl, perfStat, thermalStat);
}
inline bool UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::Override(int32_t  requestedCpuLevel, int32_t  requestedGpuLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"Override", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestedCpuLevel, requestedGpuLevel);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::UpdateImpl(float_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"UpdateImpl", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timestamp);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::OnBottleneckChange(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"OnBottleneckChange", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::RaiseGpuLevel(float_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"RaiseGpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timestamp);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::RaiseCpuLevel(float_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"RaiseCpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timestamp);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::LowerCpuLevel(float_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"LowerCpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timestamp);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::LowerGpuLevel(float_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"LowerGpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timestamp);
}
inline bool UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowLowerCpuLevel(float_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowLowerCpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timestamp);
}
inline bool UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowLowerGpuLevel(float_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowLowerGpuLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timestamp);
}
inline bool UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowRaiseLevels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowRaiseLevels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowRaiseCpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowRaiseCpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AllowRaiseGpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"AllowRaiseGpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::__ctor_b__43_0(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(),
                        {"<.ctor>b__43_0", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController* UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::New_ctor(::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*  perfControl, ::UnityEngine::AdaptivePerformance::IPerformanceStatus*  perfStat, ::UnityEngine::AdaptivePerformance::IThermalStatus*  thermalStat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*>(perfControl, perfStat, thermalStat));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController::AutoPerformanceLevelController()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/PerformanceDataRecord.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ClusterInfo_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMode_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__WarningLevel_impl.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__PerformanceDataRecord_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ClusterInfo_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMode_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__WarningLevel_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_ChangeFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::Provider::Feature (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_ChangeFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_ChangeFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.set_ChangeFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)(::UnityEngine::AdaptivePerformance::Provider::Feature)>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_ChangeFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_ChangeFlags", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::Feature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_TemperatureLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_TemperatureLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d56e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_TemperatureLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.set_TemperatureLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)(float_t)>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_TemperatureLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_TemperatureLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_TemperatureTrend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_TemperatureTrend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_TemperatureTrend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.set_TemperatureTrend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)(float_t)>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_TemperatureTrend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_TemperatureTrend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_WarningLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::WarningLevel (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_WarningLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_WarningLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_CpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_CpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_CpuPerformanceLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.set_CpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_CpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_CpuPerformanceLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_GpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_GpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_GpuPerformanceLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.set_GpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_GpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_GpuPerformanceLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_PerformanceLevelControlAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_PerformanceLevelControlAvailable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_PerformanceLevelControlAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.set_PerformanceLevelControlAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)(bool)>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_PerformanceLevelControlAvailable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_PerformanceLevelControlAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_CpuFrameTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_CpuFrameTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_CpuFrameTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_GpuFrameTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_GpuFrameTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_GpuFrameTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_OverallFrameTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_OverallFrameTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_OverallFrameTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_CpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_CpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_CpuPerformanceBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.set_CpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)(bool)>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_CpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_CpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_GpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_GpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_GpuPerformanceBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.set_GpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)(bool)>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_GpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_GpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_ClusterInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::ClusterInfo (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_ClusterInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f2bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_ClusterInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord.get_PerformanceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::PerformanceMode (::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::*)()>(&::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_PerformanceMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_PerformanceMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::AdaptivePerformance::Provider::Feature UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_ChangeFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_ChangeFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::Feature>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_ChangeFlags(::UnityEngine::AdaptivePerformance::Provider::Feature  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_ChangeFlags", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::Feature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_TemperatureLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_TemperatureLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_TemperatureLevel(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_TemperatureLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_TemperatureTrend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_TemperatureTrend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_TemperatureTrend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_TemperatureTrend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::WarningLevel UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_WarningLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_WarningLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::WarningLevel>(*this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_CpuPerformanceLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_CpuPerformanceLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_CpuPerformanceLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_CpuPerformanceLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_GpuPerformanceLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_GpuPerformanceLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_GpuPerformanceLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_GpuPerformanceLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_PerformanceLevelControlAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_PerformanceLevelControlAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_PerformanceLevelControlAvailable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_PerformanceLevelControlAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_CpuFrameTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_CpuFrameTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_GpuFrameTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_GpuFrameTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_OverallFrameTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_OverallFrameTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_CpuPerformanceBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_CpuPerformanceBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_CpuPerformanceBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_CpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_GpuPerformanceBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_GpuPerformanceBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::set_GpuPerformanceBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"set_GpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::ClusterInfo UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_ClusterInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_ClusterInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::ClusterInfo>(*this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceMode UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::get_PerformanceMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(),
                        {"get_PerformanceMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::PerformanceMode>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_ChangeFlags_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::Provider::Feature", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TemperatureLevel_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TemperatureTrend_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_WarningLevel_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::WarningLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CpuPerformanceLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_GpuPerformanceLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PerformanceLevelControlAvailable_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CpuFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_GpuFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OverallFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CpuPerformanceBoost_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_GpuPerformanceBoost_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClusterInfo_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::ClusterInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PerformanceMode_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::PerformanceMode", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::PerformanceDataRecord(::UnityEngine::AdaptivePerformance::Provider::Feature  _ChangeFlags_k__BackingField, float_t  _TemperatureLevel_k__BackingField, float_t  _TemperatureTrend_k__BackingField, ::UnityEngine::AdaptivePerformance::WarningLevel  _WarningLevel_k__BackingField, int32_t  _CpuPerformanceLevel_k__BackingField, int32_t  _GpuPerformanceLevel_k__BackingField, bool  _PerformanceLevelControlAvailable_k__BackingField, float_t  _CpuFrameTime_k__BackingField, float_t  _GpuFrameTime_k__BackingField, float_t  _OverallFrameTime_k__BackingField, bool  _CpuPerformanceBoost_k__BackingField, bool  _GpuPerformanceBoost_k__BackingField, ::UnityEngine::AdaptivePerformance::ClusterInfo  _ClusterInfo_k__BackingField, ::UnityEngine::AdaptivePerformance::PerformanceMode  _PerformanceMode_k__BackingField) noexcept  {
this->_ChangeFlags_k__BackingField = _ChangeFlags_k__BackingField;
this->_TemperatureLevel_k__BackingField = _TemperatureLevel_k__BackingField;
this->_TemperatureTrend_k__BackingField = _TemperatureTrend_k__BackingField;
this->_WarningLevel_k__BackingField = _WarningLevel_k__BackingField;
this->_CpuPerformanceLevel_k__BackingField = _CpuPerformanceLevel_k__BackingField;
this->_GpuPerformanceLevel_k__BackingField = _GpuPerformanceLevel_k__BackingField;
this->_PerformanceLevelControlAvailable_k__BackingField = _PerformanceLevelControlAvailable_k__BackingField;
this->_CpuFrameTime_k__BackingField = _CpuFrameTime_k__BackingField;
this->_GpuFrameTime_k__BackingField = _GpuFrameTime_k__BackingField;
this->_OverallFrameTime_k__BackingField = _OverallFrameTime_k__BackingField;
this->_CpuPerformanceBoost_k__BackingField = _CpuPerformanceBoost_k__BackingField;
this->_GpuPerformanceBoost_k__BackingField = _GpuPerformanceBoost_k__BackingField;
this->_ClusterInfo_k__BackingField = _ClusterInfo_k__BackingField;
this->_PerformanceMode_k__BackingField = _PerformanceMode_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord::PerformanceDataRecord()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceMetrics.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ClusterInfo_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneck_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMetrics_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ClusterInfo_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneck_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.get_CurrentCpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::get_CurrentCpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_CurrentCpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.set_CurrentCpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::set_CurrentCpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_CurrentCpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.get_CurrentGpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::get_CurrentGpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_CurrentGpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.set_CurrentGpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::set_CurrentGpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_CurrentGpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.get_PerformanceBottleneck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::PerformanceBottleneck (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::get_PerformanceBottleneck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_PerformanceBottleneck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.set_PerformanceBottleneck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)(::UnityEngine::AdaptivePerformance::PerformanceBottleneck)>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::set_PerformanceBottleneck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_PerformanceBottleneck", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneck>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.get_CpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::get_CpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e67e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_CpuPerformanceBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.set_CpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)(bool)>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::set_CpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e6800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_CpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.get_GpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::get_GpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822124d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_GpuPerformanceBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.set_GpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)(bool)>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::set_GpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182212500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_GpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.get_ClusterInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::ClusterInfo (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)()>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::get_ClusterInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f80b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_ClusterInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceMetrics.set_ClusterInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceMetrics::*)(::UnityEngine::AdaptivePerformance::ClusterInfo)>(&::UnityEngine::AdaptivePerformance::PerformanceMetrics::set_ClusterInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e10f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_ClusterInfo", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::ClusterInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AdaptivePerformance::PerformanceMetrics::get_CurrentCpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_CurrentCpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceMetrics::set_CurrentCpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_CurrentCpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::PerformanceMetrics::get_CurrentGpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_CurrentGpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceMetrics::set_CurrentGpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_CurrentGpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceBottleneck UnityEngine::AdaptivePerformance::PerformanceMetrics::get_PerformanceBottleneck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_PerformanceBottleneck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::PerformanceBottleneck>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceMetrics::set_PerformanceBottleneck(::UnityEngine::AdaptivePerformance::PerformanceBottleneck  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_PerformanceBottleneck", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceBottleneck>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::PerformanceMetrics::get_CpuPerformanceBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_CpuPerformanceBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceMetrics::set_CpuPerformanceBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_CpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::PerformanceMetrics::get_GpuPerformanceBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_GpuPerformanceBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceMetrics::set_GpuPerformanceBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_GpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::ClusterInfo UnityEngine::AdaptivePerformance::PerformanceMetrics::get_ClusterInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"get_ClusterInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::ClusterInfo>(*this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceMetrics::set_ClusterInfo(::UnityEngine::AdaptivePerformance::ClusterInfo  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceMetrics>(),
                        {"set_ClusterInfo", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::ClusterInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_CurrentCpuLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentGpuLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PerformanceBottleneck_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::PerformanceBottleneck", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CpuPerformanceBoost_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_GpuPerformanceBoost_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClusterInfo_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::ClusterInfo", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMetrics::PerformanceMetrics(int32_t  _CurrentCpuLevel_k__BackingField, int32_t  _CurrentGpuLevel_k__BackingField, ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  _PerformanceBottleneck_k__BackingField, bool  _CpuPerformanceBoost_k__BackingField, bool  _GpuPerformanceBoost_k__BackingField, ::UnityEngine::AdaptivePerformance::ClusterInfo  _ClusterInfo_k__BackingField) noexcept  {
this->_CurrentCpuLevel_k__BackingField = _CurrentCpuLevel_k__BackingField;
this->_CurrentGpuLevel_k__BackingField = _CurrentGpuLevel_k__BackingField;
this->_PerformanceBottleneck_k__BackingField = _PerformanceBottleneck_k__BackingField;
this->_CpuPerformanceBoost_k__BackingField = _CpuPerformanceBoost_k__BackingField;
this->_GpuPerformanceBoost_k__BackingField = _GpuPerformanceBoost_k__BackingField;
this->_ClusterInfo_k__BackingField = _ClusterInfo_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMetrics::PerformanceMetrics()   {
}

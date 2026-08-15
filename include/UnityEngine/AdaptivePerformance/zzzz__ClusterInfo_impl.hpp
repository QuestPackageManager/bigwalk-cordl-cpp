#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ClusterInfo.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ClusterInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ClusterInfo.get_BigCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::ClusterInfo::*)()>(&::UnityEngine::AdaptivePerformance::ClusterInfo::get_BigCore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ClusterInfo>(),
                        {"get_BigCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ClusterInfo.get_MediumCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::ClusterInfo::*)()>(&::UnityEngine::AdaptivePerformance::ClusterInfo::get_MediumCore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ClusterInfo>(),
                        {"get_MediumCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ClusterInfo.get_LittleCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::ClusterInfo::*)()>(&::UnityEngine::AdaptivePerformance::ClusterInfo::get_LittleCore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ClusterInfo>(),
                        {"get_LittleCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AdaptivePerformance::ClusterInfo::get_BigCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ClusterInfo>(),
                        {"get_BigCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::ClusterInfo::get_MediumCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ClusterInfo>(),
                        {"get_MediumCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::ClusterInfo::get_LittleCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ClusterInfo>(),
                        {"get_LittleCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_BigCore_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_MediumCore_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LittleCore_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::ClusterInfo::ClusterInfo(int32_t  _BigCore_k__BackingField, int32_t  _MediumCore_k__BackingField, int32_t  _LittleCore_k__BackingField) noexcept  {
this->_BigCore_k__BackingField = _BigCore_k__BackingField;
this->_MediumCore_k__BackingField = _MediumCore_k__BackingField;
this->_LittleCore_k__BackingField = _LittleCore_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::ClusterInfo::ClusterInfo()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IAdaptivePerformance.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformance_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceIndexer_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformanceSettings_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IPerformanceStatus_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IThermalStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformance.get_ThermalStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::IThermalStatus* (::UnityEngine::AdaptivePerformance::IAdaptivePerformance::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformance::get_ThermalStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformance.get_PerformanceStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::IPerformanceStatus* (::UnityEngine::AdaptivePerformance::IAdaptivePerformance::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformance::get_PerformanceStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformance.get_Indexer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* (::UnityEngine::AdaptivePerformance::IAdaptivePerformance::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformance::get_Indexer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformance.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> (::UnityEngine::AdaptivePerformance::IAdaptivePerformance::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformance::get_Settings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformance.SupportedFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::IAdaptivePerformance::*)(::UnityEngine::AdaptivePerformance::Provider::Feature)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformance::SupportedFeature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::AdaptivePerformance::IThermalStatus* UnityEngine::AdaptivePerformance::IAdaptivePerformance::get_ThermalStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::IThermalStatus*>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::IPerformanceStatus* UnityEngine::AdaptivePerformance::IAdaptivePerformance::get_PerformanceStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::IPerformanceStatus*>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* UnityEngine::AdaptivePerformance::IAdaptivePerformance::get_Indexer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> UnityEngine::AdaptivePerformance::IAdaptivePerformance::get_Settings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::IAdaptivePerformance::SupportedFeature(::UnityEngine::AdaptivePerformance::Provider::Feature  feature)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, feature);
}

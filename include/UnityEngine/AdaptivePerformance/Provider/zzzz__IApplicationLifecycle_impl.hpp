#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/IApplicationLifecycle.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__IApplicationLifecycle_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle.ApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle::*)()>(&::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle::ApplicationPause)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle.ApplicationResume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle::*)()>(&::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle::ApplicationResume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle::ApplicationPause()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle::ApplicationResume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}

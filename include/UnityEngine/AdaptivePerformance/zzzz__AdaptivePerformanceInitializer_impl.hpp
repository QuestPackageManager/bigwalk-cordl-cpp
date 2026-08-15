#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceInitializer_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceManagerSpawner_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer.AutoInitializeAdaptivePerformanceManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer::AutoInitializeAdaptivePerformanceManaged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182218780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer*>(),
                        {"AutoInitializeAdaptivePerformanceManaged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer.InitializeSpawner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer::InitializeSpawner)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182218840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer*>(),
                        {"InitializeSpawner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer::setStaticF_s_Spawner(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner>, "s_Spawner", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer*>(std::forward<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner>>(value));
}
inline ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner> UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer::getStaticF_s_Spawner()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner>, "s_Spawner", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer::AutoInitializeAdaptivePerformanceManaged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer*>(),
                        {"AutoInitializeAdaptivePerformanceManaged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer::InitializeSpawner(bool  isAuto)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer*>(),
                        {"InitializeSpawner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isAuto);
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer::AdaptivePerformanceInitializer()   {
}

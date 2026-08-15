#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveTransparency.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptiveTransparency_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveTransparency.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveTransparency::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveTransparency::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182223d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveTransparency.OnDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveTransparency::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveTransparency::OnDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182223dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveTransparency.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveTransparency::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveTransparency::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182223dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveTransparency.OnLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveTransparency::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveTransparency::OnLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182223df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveTransparency._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveTransparency::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveTransparency::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822160a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::AdaptiveTransparency::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveTransparency::OnDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveTransparency::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveTransparency::OnLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveTransparency::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptiveTransparency* UnityEngine::AdaptivePerformance::AdaptiveTransparency::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptiveTransparency*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptiveTransparency::AdaptiveTransparency()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePhysics.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePhysics_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePhysics.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePhysics::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePhysics::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182223330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePhysics.OnDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePhysics::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePhysics::OnDisabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182223380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePhysics.OnEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePhysics::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePhysics::OnEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182223390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePhysics.OnLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePhysics::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePhysics::OnLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822233b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePhysics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePhysics::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePhysics::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822160a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::AdaptivePerformance::AdaptivePhysics::__cordl_internal_get_m_fixedDeltaTimeDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fixedDeltaTimeDefault;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AdaptivePhysics::__cordl_internal_get_m_fixedDeltaTimeDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fixedDeltaTimeDefault;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePhysics::__cordl_internal_set_m_fixedDeltaTimeDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_fixedDeltaTimeDefault = value;
}
inline void UnityEngine::AdaptivePerformance::AdaptivePhysics::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePhysics::OnDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePhysics::OnEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePhysics::OnLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePhysics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePhysics* UnityEngine::AdaptivePerformance::AdaptivePhysics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptivePhysics*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePhysics::AdaptivePhysics()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveDecals.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptiveDecals_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveDecals.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveDecals::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveDecals::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822160b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveDecals.OnDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveDecals::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveDecals::OnDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182216100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveDecals.OnEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveDecals::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveDecals::OnEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182216120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveDecals.OnLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveDecals::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveDecals::OnLevel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182216140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveDecals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveDecals::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveDecals::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822160a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::AdaptivePerformance::AdaptiveDecals::__cordl_internal_get_m_DefaultDecalsDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultDecalsDistance;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AdaptiveDecals::__cordl_internal_get_m_DefaultDecalsDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultDecalsDistance;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptiveDecals::__cordl_internal_set_m_DefaultDecalsDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultDecalsDistance = value;
}
inline void UnityEngine::AdaptivePerformance::AdaptiveDecals::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveDecals::OnDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveDecals::OnEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveDecals::OnLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveDecals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptiveDecals* UnityEngine::AdaptivePerformance::AdaptiveDecals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptiveDecals*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptiveDecals::AdaptiveDecals()   {
}

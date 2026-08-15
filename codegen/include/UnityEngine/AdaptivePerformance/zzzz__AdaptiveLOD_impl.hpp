#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveLOD.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptiveLOD_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLOD.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLOD::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLOD::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822163c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLOD.OnDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLOD::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLOD::OnDisabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182216410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLOD.OnEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLOD::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLOD::OnEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182216420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLOD.OnLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLOD::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLOD::OnLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182216440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLOD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLOD::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLOD::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822160a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::AdaptivePerformance::AdaptiveLOD::__cordl_internal_get_m_DefaultLodBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultLodBias;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AdaptiveLOD::__cordl_internal_get_m_DefaultLodBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultLodBias;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptiveLOD::__cordl_internal_set_m_DefaultLodBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultLodBias = value;
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLOD::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLOD::OnDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLOD::OnEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLOD::OnLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLOD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptiveLOD* UnityEngine::AdaptivePerformance::AdaptiveLOD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptiveLOD*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptiveLOD::AdaptiveLOD()   {
}

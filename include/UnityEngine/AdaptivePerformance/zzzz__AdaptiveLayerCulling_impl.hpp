#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveLayerCulling.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptiveLayerCulling_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182216540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling.OnDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::OnDisabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182216590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling.OnEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::OnEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822165e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling.OnLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::OnLevel)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822165f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling.AsignDefaultValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::AsignDefaultValues)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182216490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(),
                        {"AsignDefaultValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822166e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_get_m_defaultDistances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultDistances;
}
constexpr ::ArrayW<float_t> const& UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_get_m_defaultDistances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultDistances;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_set_m_defaultDistances(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultDistances = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_get_m_scaledDistances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scaledDistances;
}
constexpr ::ArrayW<float_t> const& UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_get_m_scaledDistances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scaledDistances;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_set_m_scaledDistances(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_scaledDistances = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_get_init()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___init;
}
constexpr bool const& UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_get_init() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___init;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_set_init(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___init = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_get_m_cachedCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_get_m_cachedCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedCamera;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::__cordl_internal_set_m_cachedCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cachedCamera = value;
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::OnDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::OnEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::OnLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::AsignDefaultValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(),
                        {"AsignDefaultValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling* UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptiveLayerCulling::AdaptiveLayerCulling()   {
}

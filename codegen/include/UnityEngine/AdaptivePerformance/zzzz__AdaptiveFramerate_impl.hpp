#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveFramerate.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptiveFramerate_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveFramerate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveFramerate::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveFramerate::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822161b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveFramerate.OnDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveFramerate::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveFramerate::OnDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182216200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveFramerate.OnEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveFramerate::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveFramerate::OnEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182216220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveFramerate.OnLevelIncrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveFramerate::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveFramerate::OnLevelIncrease)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822162f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveFramerate.OnLevelDecrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveFramerate::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveFramerate::OnLevelDecrease)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182216270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptiveFramerate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptiveFramerate::*)()>(&::UnityEngine::AdaptivePerformance::AdaptiveFramerate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822163b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::AdaptivePerformance::AdaptiveFramerate::__cordl_internal_get_m_DefaultFPS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultFPS;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::AdaptiveFramerate::__cordl_internal_get_m_DefaultFPS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultFPS;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptiveFramerate::__cordl_internal_set_m_DefaultFPS(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultFPS = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::AdaptiveFramerate::__cordl_internal_get_m_FirstTimeStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstTimeStart;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::AdaptiveFramerate::__cordl_internal_get_m_FirstTimeStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstTimeStart;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptiveFramerate::__cordl_internal_set_m_FirstTimeStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstTimeStart = value;
}
inline void UnityEngine::AdaptivePerformance::AdaptiveFramerate::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveFramerate::OnDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveFramerate::OnEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveFramerate::OnLevelIncrease()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveFramerate::OnLevelDecrease()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptiveFramerate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptiveFramerate* UnityEngine::AdaptivePerformance::AdaptiveFramerate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptiveFramerate*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptiveFramerate::AdaptiveFramerate()   {
}

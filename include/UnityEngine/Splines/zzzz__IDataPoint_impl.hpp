#pragma once
// IWYU pragma private; include "UnityEngine/Splines/IDataPoint.hpp"
#include "UnityEngine/Splines/zzzz__IDataPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::IDataPoint.get_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::IDataPoint::*)()>(&::UnityEngine::Splines::IDataPoint::get_Index)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::IDataPoint*>(),
                    {::i2c::class_of<::UnityEngine::Splines::IDataPoint*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::IDataPoint.set_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::IDataPoint::*)(float_t)>(&::UnityEngine::Splines::IDataPoint::set_Index)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::IDataPoint*>(),
                    {::i2c::class_of<::UnityEngine::Splines::IDataPoint*>(), 1}
                ));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Splines::IDataPoint::get_Index()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::IDataPoint*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::IDataPoint::set_Index(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::IDataPoint*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}

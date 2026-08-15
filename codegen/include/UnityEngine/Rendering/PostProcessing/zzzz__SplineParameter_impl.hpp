#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/SplineParameter.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__SplineParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Spline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::SplineParameter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::SplineParameter::*)()>(&::UnityEngine::Rendering::PostProcessing::SplineParameter::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fd0090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::SplineParameter.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::SplineParameter::*)(::UnityEngine::Rendering::PostProcessing::ParameterOverride*)>(&::UnityEngine::Rendering::PostProcessing::SplineParameter::SetValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fd00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::SplineParameter.Interp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::SplineParameter::*)(::UnityEngine::Rendering::PostProcessing::Spline*, ::UnityEngine::Rendering::PostProcessing::Spline*, float_t)>(&::UnityEngine::Rendering::PostProcessing::SplineParameter::Interp)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181fcfe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::SplineParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::SplineParameter::*)()>(&::UnityEngine::Rendering::PostProcessing::SplineParameter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fd00f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::SplineParameter::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::SplineParameter::SetValue(::UnityEngine::Rendering::PostProcessing::ParameterOverride*  parameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter);
}
inline void UnityEngine::Rendering::PostProcessing::SplineParameter::Interp(::UnityEngine::Rendering::PostProcessing::Spline*  from, ::UnityEngine::Rendering::PostProcessing::Spline*  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline void UnityEngine::Rendering::PostProcessing::SplineParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SplineParameter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::SplineParameter* UnityEngine::Rendering::PostProcessing::SplineParameter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::SplineParameter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter::SplineParameter()   {
}

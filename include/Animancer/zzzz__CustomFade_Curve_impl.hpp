#pragma once
// IWYU pragma private; include "Animancer/CustomFade_Curve.hpp"
#include "Animancer/zzzz__CustomFade_impl.hpp"
#include "Animancer/zzzz__CustomFade_Curve_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomFade_Curve.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CustomFade_Curve* (*)(::UnityEngine::AnimationCurve*)>(&::GlobalNamespace::CustomFade_Curve::Acquire)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180307680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(),
                        {"Acquire", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomFade_Curve.CalculateWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CustomFade_Curve::*)(float_t)>(&::GlobalNamespace::CustomFade_Curve::CalculateWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803076f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomFade_Curve.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomFade_Curve::*)()>(&::GlobalNamespace::CustomFade_Curve::Release)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180307710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomFade_Curve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomFade_Curve::*)()>(&::GlobalNamespace::CustomFade_Curve::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180307750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CustomFade_Curve::__cordl_internal_get__Curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Curve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CustomFade_Curve::__cordl_internal_get__Curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Curve;
}
constexpr void GlobalNamespace::CustomFade_Curve::__cordl_internal_set__Curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Curve = value;
}
inline ::GlobalNamespace::CustomFade_Curve* GlobalNamespace::CustomFade_Curve::Acquire(::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(),
                        {"Acquire", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CustomFade_Curve*>(nullptr, ___internal_method, curve);
}
inline float_t GlobalNamespace::CustomFade_Curve::CalculateWeight(float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, progress);
}
inline void GlobalNamespace::CustomFade_Curve::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomFade_Curve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomFade_Curve*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomFade_Curve* GlobalNamespace::CustomFade_Curve::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomFade_Curve*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomFade_Curve::CustomFade_Curve()   {
}

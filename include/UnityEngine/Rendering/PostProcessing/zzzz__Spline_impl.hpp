#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Spline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Spline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Spline::*)(::UnityEngine::AnimationCurve*, float_t, bool, ::UnityEngine::Vector2)>(&::UnityEngine::Rendering::PostProcessing::Spline::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fd18f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Spline.Cache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Spline::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::Spline::Cache)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181fd15d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(),
                        {"Cache", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Spline.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::Spline::*)(float_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::Spline::Evaluate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd1890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Spline.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::Spline::*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::Spline::Evaluate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fd1820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Spline.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::Spline::*)()>(&::UnityEngine::Rendering::PostProcessing::Spline::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd18c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curve;
}
constexpr void UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_set_curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curve = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_m_Loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Loop;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_m_Loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Loop;
}
constexpr void UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_set_m_Loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Loop = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_m_ZeroValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZeroValue;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_m_ZeroValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZeroValue;
}
constexpr void UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_set_m_ZeroValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ZeroValue = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_m_Range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Range;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_m_Range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Range;
}
constexpr void UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_set_m_Range(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Range = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_m_InternalLoopingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalLoopingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_m_InternalLoopingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalLoopingCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_set_m_InternalLoopingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InternalLoopingCurve = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_frameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCount;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_frameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCount;
}
constexpr void UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_set_frameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameCount = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_cachedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedData;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_get_cachedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedData;
}
constexpr void UnityEngine::Rendering::PostProcessing::Spline::__cordl_internal_set_cachedData(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedData = value;
}
inline void UnityEngine::Rendering::PostProcessing::Spline::_ctor(::UnityEngine::AnimationCurve*  curve, float_t  zeroValue, bool  loop, ::UnityEngine::Vector2  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, zeroValue, loop, bounds);
}
inline void UnityEngine::Rendering::PostProcessing::Spline::Cache(int32_t  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(),
                        {"Cache", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline float_t UnityEngine::Rendering::PostProcessing::Spline::Evaluate(float_t  t, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t, length);
}
inline float_t UnityEngine::Rendering::PostProcessing::Spline::Evaluate(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t);
}
inline int32_t UnityEngine::Rendering::PostProcessing::Spline::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Spline*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::Spline* UnityEngine::Rendering::PostProcessing::Spline::New_ctor(::UnityEngine::AnimationCurve*  curve, float_t  zeroValue, bool  loop, ::UnityEngine::Vector2  bounds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::Spline*>(curve, zeroValue, loop, bounds));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::Spline::Spline()   {
}

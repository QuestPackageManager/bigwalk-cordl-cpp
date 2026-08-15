#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ISpline.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::ISpline.get_Closed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::ISpline::*)()>(&::UnityEngine::Splines::ISpline::get_Closed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISpline*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ISpline.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::ISpline::*)()>(&::UnityEngine::Splines::ISpline::GetLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISpline*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ISpline.GetCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierCurve (::UnityEngine::Splines::ISpline::*)(int32_t)>(&::UnityEngine::Splines::ISpline::GetCurve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISpline*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ISpline.GetCurveLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::ISpline::*)(int32_t)>(&::UnityEngine::Splines::ISpline::GetCurveLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISpline*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ISpline.GetCurveUpVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::ISpline::*)(int32_t, float_t)>(&::UnityEngine::Splines::ISpline::GetCurveUpVector)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISpline*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ISpline.GetCurveInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::ISpline::*)(int32_t, float_t)>(&::UnityEngine::Splines::ISpline::GetCurveInterpolation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISpline*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 5}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::Splines::ISpline::get_Closed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Splines::ISpline::GetLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Splines::BezierCurve UnityEngine::Splines::ISpline::GetCurve(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierCurve>(this, ___internal_method, index);
}
inline float_t UnityEngine::Splines::ISpline::GetCurveLength(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::ISpline::GetCurveUpVector(int32_t  index, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, index, t);
}
inline float_t UnityEngine::Splines::ISpline::GetCurveInterpolation(int32_t  curveIndex, float_t  curveDistance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISpline*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, curveIndex, curveDistance);
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::ISpline::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::ISpline::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::ISpline::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::ISpline::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Splines::ISpline::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Splines::ISpline::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::ISpline::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::ISpline::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}

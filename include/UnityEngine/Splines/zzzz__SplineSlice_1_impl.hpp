#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineSlice_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineRange_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineSlice_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineRange_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineSlice_1_def.hpp"
template<typename T>
inline int32_t UnityEngine::Splines::SplineSlice_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Splines::SplineSlice_1<T>::get_Closed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"get_Closed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::SplineSlice_1<T>::FlipTangents(::UnityEngine::Splines::BezierKnot  knot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"FlipTangents", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(nullptr, ___internal_method, knot);
}
template<typename T>
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::SplineSlice_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(*this, ___internal_method, index);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::SplineSlice_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* UnityEngine::Splines::SplineSlice_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineSlice_1<T>::_ctor(T  spline, ::UnityEngine::Splines::SplineRange  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::SplineRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spline, range);
}
template<typename T>
inline void UnityEngine::Splines::SplineSlice_1<T>::_ctor(T  spline, ::UnityEngine::Splines::SplineRange  range, ::Unity::Mathematics::float4x4  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::SplineRange>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spline, range, transform);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineSlice_1<T>::GetLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"GetLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::BezierCurve UnityEngine::Splines::SplineSlice_1<T>::GetCurve(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"GetCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierCurve>(*this, ___internal_method, index);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineSlice_1<T>::GetCurveLength(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"GetCurveLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineSlice_1<T>::GetCurveUpVector(int32_t  index, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"GetCurveUpVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, index, t);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineSlice_1<T>::GetCurveInterpolation(int32_t  curveIndex, float_t  curveDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1<T>>(),
                        {"GetCurveInterpolation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, curveIndex, curveDistance);
}
/// @brief Convert operator to "::UnityEngine::Splines::ISpline"
template<typename T>
constexpr  UnityEngine::Splines::SplineSlice_1<T>::operator ::UnityEngine::Splines::ISpline*()  {
return static_cast<::UnityEngine::Splines::ISpline*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::ISpline"
template<typename T>
constexpr ::UnityEngine::Splines::ISpline* UnityEngine::Splines::SplineSlice_1<T>::i___UnityEngine__Splines__ISpline()  {
return static_cast<::UnityEngine::Splines::ISpline*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
template<typename T>
constexpr  UnityEngine::Splines::SplineSlice_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*()  {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::SplineSlice_1<T>::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_()  {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
template<typename T>
constexpr  UnityEngine::Splines::SplineSlice_1<T>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::SplineSlice_1<T>::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  UnityEngine::Splines::SplineSlice_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* UnityEngine::Splines::SplineSlice_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
template<typename T>
constexpr  UnityEngine::Splines::SplineSlice_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*()  {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::SplineSlice_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_()  {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Spline", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "Range", ty: "::UnityEngine::Splines::SplineRange", modifiers: "", def_value: Some("{}") }, CppParam { name: "Transform", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::UnityEngine::Splines::SplineSlice_1<T>::SplineSlice_1(T  Spline, ::UnityEngine::Splines::SplineRange  Range, ::Unity::Mathematics::float4x4  Transform) noexcept  {
this->Spline = Spline;
this->Range = Range;
this->Transform = Transform;
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineSlice_1<T>::SplineSlice_1()   {
}
template<typename T>
constexpr int32_t& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::UnityEngine::Splines::BezierKnot& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::UnityEngine::Splines::BezierKnot const& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_set___2__current(::UnityEngine::Splines::BezierKnot  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr ::UnityEngine::Splines::SplineSlice_1<T>& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::UnityEngine::Splines::SplineSlice_1<T> const& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_set___4__this(::UnityEngine::Splines::SplineSlice_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr int32_t& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
template<typename T>
constexpr int32_t const& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
template<typename T>
constexpr int32_t& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get__c_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____c_5__3;
}
template<typename T>
constexpr int32_t const& UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_get__c_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____c_5__3;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::__cordl_internal_set__c_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____c_5__3 = value;
}
template<typename T>
inline void UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::System_Collections_Generic_IEnumerator_UnityEngine_Splines_BezierKnot__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Splines.BezierKnot>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>* UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>"
template<typename T>
constexpr  UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::i___System__Collections__Generic__IEnumerator_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>::SplineSlice_1__GetEnumerator_d__10()   {
}

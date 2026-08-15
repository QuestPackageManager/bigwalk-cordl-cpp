#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineData_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__DataPoint_1_impl.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Splines/zzzz__DataPointComparer_1_def.hpp"
#include "UnityEngine/Splines/zzzz__DataPoint_1_def.hpp"
#include "UnityEngine/Splines/zzzz__ISplineModificationHandler_def.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineModificationData_def.hpp"
template<typename T>
inline void UnityEngine::Splines::SplineData_1___c<T>::setStaticF___9(::UnityEngine::Splines::SplineData_1___c<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Splines::SplineData_1___c<T>*, "<>9", ::UnityEngine::Splines::SplineData_1___c<T>*>(std::forward<::UnityEngine::Splines::SplineData_1___c<T>*>(value));
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1___c<T>* UnityEngine::Splines::SplineData_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Splines::SplineData_1___c<T>*, "<>9", ::UnityEngine::Splines::SplineData_1___c<T>*>();
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1___c<T>::setStaticF___9__17_0(::System::Func_2<::UnityEngine::Splines::DataPoint_1<T>,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Splines::DataPoint_1<T>,float_t>*, "<>9__17_0", ::UnityEngine::Splines::SplineData_1___c<T>*>(std::forward<::System::Func_2<::UnityEngine::Splines::DataPoint_1<T>,float_t>*>(value));
}
template<typename T>
inline ::System::Func_2<::UnityEngine::Splines::DataPoint_1<T>,float_t>* UnityEngine::Splines::SplineData_1___c<T>::getStaticF___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Splines::DataPoint_1<T>,float_t>*, "<>9__17_0", ::UnityEngine::Splines::SplineData_1___c<T>*>();
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineData_1___c<T>::_get_Indexes_b__17_0(::UnityEngine::Splines::DataPoint_1<T>  dp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1___c<T>*>(),
                        {"<get_Indexes>b__17_0", {}, {::i2c::type_of<::UnityEngine::Splines::DataPoint_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, dp);
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1___c<T>* UnityEngine::Splines::SplineData_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineData_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineData_1___c<T>::SplineData_1___c()   {
}
template<typename T>
constexpr float_t& UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>::__cordl_internal_get_t()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t;
}
template<typename T>
constexpr float_t const& UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>::__cordl_internal_get_t() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>::__cordl_internal_set_t(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___t = value;
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>::_RemoveDataPoint_b__0(::UnityEngine::Splines::DataPoint_1<T>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>*>(),
                        {"<RemoveDataPoint>b__0", {}, {::i2c::type_of<::UnityEngine::Splines::DataPoint_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>* UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>::SplineData_1___c__DisplayClass32_0()   {
}
template<typename T>
constexpr int32_t& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::UnityEngine::Splines::DataPoint_1<T>& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::UnityEngine::Splines::DataPoint_1<T> const& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_set___2__current(::UnityEngine::Splines::DataPoint_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr ::UnityEngine::Splines::SplineData_1<T>*& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::UnityEngine::Splines::SplineData_1<T>* const& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_set___4__this(::UnityEngine::Splines::SplineData_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr int32_t& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
template<typename T>
constexpr int32_t const& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
template<typename T>
constexpr int32_t& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get__c_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____c_5__3;
}
template<typename T>
constexpr int32_t const& UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_get__c_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____c_5__3;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::__cordl_internal_set__c_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____c_5__3 = value;
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::DataPoint_1<T> UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::System_Collections_Generic_IEnumerator_UnityEngine_Splines_DataPoint_T___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Splines.DataPoint<T>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::DataPoint_1<T>>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>* UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>"
template<typename T>
constexpr  UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>* UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::i___System__Collections__Generic__IEnumerator_1___UnityEngine__Splines__DataPoint_1_T__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>::SplineData_1__GetEnumerator_d__46()   {
}
template<typename T>
constexpr ::UnityEngine::Splines::PathIndexUnit& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_m_IndexUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndexUnit;
}
template<typename T>
constexpr ::UnityEngine::Splines::PathIndexUnit const& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_m_IndexUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndexUnit;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1<T>::__cordl_internal_set_m_IndexUnit(::UnityEngine::Splines::PathIndexUnit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IndexUnit = value;
}
template<typename T>
constexpr T& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_m_DefaultValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultValue;
}
template<typename T>
constexpr T const& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_m_DefaultValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultValue;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1<T>::__cordl_internal_set_m_DefaultValue(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultValue = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::DataPoint_1<T>>*& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_m_DataPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DataPoints;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::DataPoint_1<T>>* const& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_m_DataPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DataPoints;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1<T>::__cordl_internal_set_m_DataPoints(::System::Collections::Generic::List_1<::UnityEngine::Splines::DataPoint_1<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DataPoints = value;
}
template<typename T>
constexpr bool& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_m_NeedsSort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NeedsSort;
}
template<typename T>
constexpr bool const& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_m_NeedsSort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NeedsSort;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1<T>::__cordl_internal_set_m_NeedsSort(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NeedsSort = value;
}
template<typename T>
constexpr ::System::Action*& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changed;
}
template<typename T>
constexpr ::System::Action* const& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changed;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1<T>::__cordl_internal_set_changed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changed = value;
}
template<typename T>
constexpr ::System::Action*& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_Changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Changed;
}
template<typename T>
constexpr ::System::Action* const& UnityEngine::Splines::SplineData_1<T>::__cordl_internal_get_Changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Changed;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineData_1<T>::__cordl_internal_set_Changed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Changed = value;
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::setStaticF_k_DataPointComparer(::UnityEngine::Splines::DataPointComparer_1<::UnityEngine::Splines::DataPoint_1<T>>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Splines::DataPointComparer_1<::UnityEngine::Splines::DataPoint_1<T>>*, "k_DataPointComparer", ::UnityEngine::Splines::SplineData_1<T>*>(std::forward<::UnityEngine::Splines::DataPointComparer_1<::UnityEngine::Splines::DataPoint_1<T>>*>(value));
}
template<typename T>
inline ::UnityEngine::Splines::DataPointComparer_1<::UnityEngine::Splines::DataPoint_1<T>>* UnityEngine::Splines::SplineData_1<T>::getStaticF_k_DataPointComparer()  {
return ::cordl_internals::getStaticField<::UnityEngine::Splines::DataPointComparer_1<::UnityEngine::Splines::DataPoint_1<T>>*, "k_DataPointComparer", ::UnityEngine::Splines::SplineData_1<T>*>();
}
template<typename T>
inline ::UnityEngine::Splines::DataPoint_1<T> UnityEngine::Splines::SplineData_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::DataPoint_1<T>>(this, ___internal_method, index);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::set_Item(int32_t  index, ::UnityEngine::Splines::DataPoint_1<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::DataPoint_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template<typename T>
inline ::UnityEngine::Splines::PathIndexUnit UnityEngine::Splines::SplineData_1<T>::get_PathIndexUnit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"get_PathIndexUnit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::PathIndexUnit>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::set_PathIndexUnit(::UnityEngine::Splines::PathIndexUnit  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"set_PathIndexUnit", {}, {::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T UnityEngine::Splines::SplineData_1<T>::get_DefaultValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"get_DefaultValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::set_DefaultValue(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"set_DefaultValue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineData_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<float_t>* UnityEngine::Splines::SplineData_1<T>::get_Indexes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"get_Indexes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<float_t>*>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::add_changed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"add_changed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::remove_changed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"remove_changed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::add_Changed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"add_Changed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::remove_Changed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"remove_Changed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::_ctor(T  init)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, init);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>*  dataPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataPoints);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"SetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::Add(float_t  t, T  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, data);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineData_1<T>::Add(::UnityEngine::Splines::DataPoint_1<T>  dataPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Splines::DataPoint_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dataPoint);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineData_1<T>::AddDataPointWithDefaultValue(float_t  t, bool  useDefaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"AddDataPointWithDefaultValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, t, useDefaultValue);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template<typename T>
inline bool UnityEngine::Splines::SplineData_1<T>::RemoveDataPoint(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"RemoveDataPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineData_1<T>::MoveDataPoint(int32_t  index, float_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"MoveDataPoint", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, newIndex);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineData_1<T>::Wrap(int32_t  value, int32_t  lowerBound, int32_t  upperBound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"Wrap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, lowerBound, upperBound);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineData_1<T>::ResolveBinaryIndex(int32_t  index, bool  wrap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"ResolveBinaryIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, wrap);
}
template<typename T>
inline ::System::ValueTuple_3<int32_t,int32_t,float_t> UnityEngine::Splines::SplineData_1<T>::GetIndex(float_t  t, float_t  splineLength, int32_t  knotCount, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"GetIndex", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t,int32_t,float_t>>(this, ___internal_method, t, splineLength, knotCount, closed);
}
template<typename T>
template<typename TSpline,typename TInterpolator>
inline T UnityEngine::Splines::SplineData_1<T>::Evaluate(TSpline  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  indexUnit, TInterpolator  interpolator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                    {"Evaluate", {::i2c::class_of<TSpline>(), ::i2c::class_of<TInterpolator>()}, {::i2c::type_of<TSpline>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>(), ::i2c::type_of<TInterpolator>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSpline>(), ::i2c::class_of<TInterpolator>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, spline, t, indexUnit, interpolator);
}
template<typename T>
template<typename TSpline,typename TInterpolator>
inline T UnityEngine::Splines::SplineData_1<T>::Evaluate(TSpline  spline, float_t  t, TInterpolator  interpolator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                    {"Evaluate", {::i2c::class_of<TSpline>(), ::i2c::class_of<TInterpolator>()}, {::i2c::type_of<TSpline>(), ::i2c::type_of<float_t>(), ::i2c::type_of<TInterpolator>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSpline>(), ::i2c::class_of<TInterpolator>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, spline, t, interpolator);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::SetDataPoint(int32_t  index, ::UnityEngine::Splines::DataPoint_1<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"SetDataPoint", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::DataPoint_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::SetDataPointNoSort(int32_t  index, ::UnityEngine::Splines::DataPoint_1<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"SetDataPointNoSort", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::DataPoint_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::SortIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"SortIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::ForceSort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"ForceSort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
template<typename TSplineType>
inline void UnityEngine::Splines::SplineData_1<T>::ConvertPathUnit(TSplineType  spline, ::UnityEngine::Splines::PathIndexUnit  toUnit)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                    {"ConvertPathUnit", {::i2c::class_of<TSplineType>()}, {::i2c::type_of<TSplineType>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSplineType>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline, toUnit);
}
template<typename T>
template<typename TSplineType>
inline float_t UnityEngine::Splines::SplineData_1<T>::GetNormalizedInterpolation(TSplineType  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                    {"GetNormalizedInterpolation", {::i2c::class_of<TSplineType>()}, {::i2c::type_of<TSplineType>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSplineType>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, spline, t);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>* UnityEngine::Splines::SplineData_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* UnityEngine::Splines::SplineData_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineData_1<T>::WrapInt(float_t  index, int32_t  lowerBound, int32_t  upperBound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"WrapInt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, index, lowerBound, upperBound);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineData_1<T>::ClampInt(float_t  index, int32_t  lowerBound, int32_t  upperBound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"ClampInt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, index, lowerBound, upperBound);
}
template<typename T>
inline void UnityEngine::Splines::SplineData_1<T>::UnityEngine_Splines_ISplineModificationHandler_OnSplineModified(::UnityEngine::Splines::SplineModificationData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineData_1<T>*>(),
                        {"UnityEngine.Splines.ISplineModificationHandler.OnSplineModified", {}, {::i2c::type_of<::UnityEngine::Splines::SplineModificationData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1<T>* UnityEngine::Splines::SplineData_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineData_1<T>*>());
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1<T>* UnityEngine::Splines::SplineData_1<T>::New_ctor(T  init)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineData_1<T>*>(init));
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1<T>* UnityEngine::Splines::SplineData_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>*  dataPoints)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineData_1<T>*>(dataPoints));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>"
template<typename T>
constexpr  UnityEngine::Splines::SplineData_1<T>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>* UnityEngine::Splines::SplineData_1<T>::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__DataPoint_1_T__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  UnityEngine::Splines::SplineData_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* UnityEngine::Splines::SplineData_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Splines::ISplineModificationHandler"
template<typename T>
constexpr  UnityEngine::Splines::SplineData_1<T>::operator ::UnityEngine::Splines::ISplineModificationHandler*() noexcept {
return static_cast<::UnityEngine::Splines::ISplineModificationHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Splines::ISplineModificationHandler"
template<typename T>
constexpr ::UnityEngine::Splines::ISplineModificationHandler* UnityEngine::Splines::SplineData_1<T>::i___UnityEngine__Splines__ISplineModificationHandler() noexcept {
return static_cast<::UnityEngine::Splines::ISplineModificationHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineData_1<T>::SplineData_1()   {
}

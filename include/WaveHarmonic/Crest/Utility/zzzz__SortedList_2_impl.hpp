#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/SortedList_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*& WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::__cordl_internal_get__BackingList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BackingList;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* const& WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::__cordl_internal_get__BackingList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BackingList;
}
template<typename TKey,typename TValue>
constexpr void WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::__cordl_internal_set__BackingList(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BackingList = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Comparison_1<TKey>*& WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::__cordl_internal_get__Comparison()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comparison;
}
template<typename TKey,typename TValue>
constexpr ::System::Comparison_1<TKey>* const& WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::__cordl_internal_get__Comparison() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comparison;
}
template<typename TKey,typename TValue>
constexpr void WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::__cordl_internal_set__Comparison(::System::Comparison_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Comparison = value;
}
template<typename TKey,typename TValue>
constexpr bool& WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::__cordl_internal_get__NeedsSorting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NeedsSorting;
}
template<typename TKey,typename TValue>
constexpr bool const& WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::__cordl_internal_get__NeedsSorting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NeedsSorting;
}
template<typename TKey,typename TValue>
constexpr void WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::__cordl_internal_set__NeedsSorting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NeedsSorting = value;
}
template<typename TKey,typename TValue>
inline int32_t WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline int32_t WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::Comparison(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  x, ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"Comparison", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(), ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template<typename TKey,typename TValue>
inline void WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::_ctor(::System::Comparison_1<TKey>*  comparison)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Comparison_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparison);
}
template<typename TKey,typename TValue>
inline void WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::Add(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"Add", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline bool WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::Contains(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"Contains", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline bool WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::Remove(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"Remove", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline void WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::List_1_Enumerator<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>> WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1_Enumerator<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::ResortArrays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(),
                        {"ResortArrays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>* WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::New_ctor(::System::Comparison_1<TKey>*  comparison)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>*>(comparison));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>::SortedList_2()   {
}

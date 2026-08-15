#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ArrayUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__ArrayUtility_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
template<typename T>
inline void UnityEngine::Splines::ArrayUtility::RemoveAt(::by_ref<::ArrayW<T>>  array, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ArrayUtility*>(),
                    {"RemoveAt", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index);
}
template<typename T>
inline void UnityEngine::Splines::ArrayUtility::RemoveAt(::by_ref<::ArrayW<T>>  array, ::System::Collections::Generic::IEnumerable_1<int32_t>*  indices)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ArrayUtility*>(),
                    {"RemoveAt", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, indices);
}
template<typename T>
inline void UnityEngine::Splines::ArrayUtility::SortedRemoveAt(::by_ref<::ArrayW<T>>  array, ::System::Collections::Generic::IList_1<int32_t>*  sorted)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ArrayUtility*>(),
                    {"SortedRemoveAt", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, sorted);
}
template<typename T>
inline void UnityEngine::Splines::ArrayUtility::Remove(::by_ref<::ArrayW<T>>  array, T  element)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ArrayUtility*>(),
                    {"Remove", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, element);
}
template<typename T>
inline void UnityEngine::Splines::ArrayUtility::Add(::by_ref<::ArrayW<T>>  array, T  element)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ArrayUtility*>(),
                    {"Add", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, element);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::ArrayUtility::ArrayUtility()   {
}

#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/EnumerableAsyncExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__EnumerableAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* Cysharp::Threading::Tasks::EnumerableAsyncExtensions::Select(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::EnumerableAsyncExtensions*>(),
                    {"Select", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*>(nullptr, ___internal_method, source, selector);
}
template<typename T,typename TR>
inline ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<TR>>* Cysharp::Threading::Tasks::EnumerableAsyncExtensions::Select(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::EnumerableAsyncExtensions*>(),
                    {"Select", {::i2c::class_of<T>(), ::i2c::class_of<TR>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TR>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<TR>>*>(nullptr, ___internal_method, source, selector);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* Cysharp::Threading::Tasks::EnumerableAsyncExtensions::Select(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_3<T,int32_t,::Cysharp::Threading::Tasks::UniTask>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::EnumerableAsyncExtensions*>(),
                    {"Select", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_3<T,int32_t,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*>(nullptr, ___internal_method, source, selector);
}
template<typename T,typename TR>
inline ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<TR>>* Cysharp::Threading::Tasks::EnumerableAsyncExtensions::Select(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_3<T,int32_t,::Cysharp::Threading::Tasks::UniTask_1<TR>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::EnumerableAsyncExtensions*>(),
                    {"Select", {::i2c::class_of<T>(), ::i2c::class_of<TR>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_3<T,int32_t,::Cysharp::Threading::Tasks::UniTask_1<TR>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TR>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<TR>>*>(nullptr, ___internal_method, source, selector);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::EnumerableAsyncExtensions::EnumerableAsyncExtensions()   {
}

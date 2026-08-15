#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/StateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__StateExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ReadOnlyAsyncReactiveProperty_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename T>
inline ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* Cysharp::Threading::Tasks::StateExtensions::ToReadOnlyAsyncReactiveProperty(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::StateExtensions*>(),
                    {"ToReadOnlyAsyncReactiveProperty", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* Cysharp::Threading::Tasks::StateExtensions::ToReadOnlyAsyncReactiveProperty(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, T  initialValue, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::StateExtensions*>(),
                    {"ToReadOnlyAsyncReactiveProperty", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(nullptr, ___internal_method, source, initialValue, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::StateExtensions::StateExtensions()   {
}

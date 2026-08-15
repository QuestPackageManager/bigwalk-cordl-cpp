#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskAsyncEnumerableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskAsyncEnumerableExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCancelableAsyncEnumerable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T> Cysharp::Threading::Tasks::UniTaskAsyncEnumerableExtensions::WithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskAsyncEnumerableExtensions*>(),
                    {"WithCancellation", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>>(nullptr, ___internal_method, source, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskAsyncEnumerableExtensions::UniTaskAsyncEnumerableExtensions()   {
}

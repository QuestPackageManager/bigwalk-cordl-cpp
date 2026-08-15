#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCancelableAsyncEnumerable_1.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCancelableAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCancelableAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerator);
}
template<typename T>
inline T Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(*this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "enumerator", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::UniTaskCancelableAsyncEnumerable_1_Enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  enumerator) noexcept  {
this->enumerator = enumerator;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::UniTaskCancelableAsyncEnumerable_1_Enumerator()   {
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  enumerable, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T> Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>::GetAsyncEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>>(),
                        {"GetAsyncEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "enumerable", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>::UniTaskCancelableAsyncEnumerable_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  enumerable, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->enumerable = enumerable;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>::UniTaskCancelableAsyncEnumerable_1()   {
}

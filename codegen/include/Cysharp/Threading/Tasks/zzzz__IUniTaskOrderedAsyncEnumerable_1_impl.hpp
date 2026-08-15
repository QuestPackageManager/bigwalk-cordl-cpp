#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskOrderedAsyncEnumerable_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskOrderedAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename TElement>
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>::CreateOrderedEnumerable(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(), 0}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TKey>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(this, ___internal_method, keySelector, comparer, descending);
}
template<typename TElement>
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>::CreateOrderedEnumerable(::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(), 1}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TKey>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(this, ___internal_method, keySelector, comparer, descending);
}
template<typename TElement>
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>::CreateOrderedEnumerable(::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(), 2}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TKey>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(this, ___internal_method, keySelector, comparer, descending);
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
template<typename TElement>
constexpr  Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TElement_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*>(static_cast<void*>(this));
}

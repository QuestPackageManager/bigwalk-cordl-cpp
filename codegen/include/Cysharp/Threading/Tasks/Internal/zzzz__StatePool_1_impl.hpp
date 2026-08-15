#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/StatePool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StatePool_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StateTuple_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
template<typename T1>
inline void Cysharp::Threading::Tasks::Internal::StatePool_1<T1>::setStaticF_queue(::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>*, "queue", ::Cysharp::Threading::Tasks::Internal::StatePool_1<T1>*>(std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>*>(value));
}
template<typename T1>
inline ::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>* Cysharp::Threading::Tasks::Internal::StatePool_1<T1>::getStaticF_queue()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>*, "queue", ::Cysharp::Threading::Tasks::Internal::StatePool_1<T1>*>();
}
template<typename T1>
inline ::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>* Cysharp::Threading::Tasks::Internal::StatePool_1<T1>::Create(T1  item1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StatePool_1<T1>*>(),
                        {"Create", {}, {::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>(nullptr, ___internal_method, item1);
}
template<typename T1>
inline void Cysharp::Threading::Tasks::Internal::StatePool_1<T1>::Return(::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*  tuple)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StatePool_1<T1>*>(),
                        {"Return", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tuple);
}
// Ctor Parameters []
template<typename T1>
constexpr ::Cysharp::Threading::Tasks::Internal::StatePool_1<T1>::StatePool_1()   {
}

#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/StatePool_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StatePool_2_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StateTuple_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
template<typename T1,typename T2>
inline void Cysharp::Threading::Tasks::Internal::StatePool_2<T1,T2>::setStaticF_queue(::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>*, "queue", ::Cysharp::Threading::Tasks::Internal::StatePool_2<T1,T2>*>(std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>*>(value));
}
template<typename T1,typename T2>
inline ::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>* Cysharp::Threading::Tasks::Internal::StatePool_2<T1,T2>::getStaticF_queue()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>*, "queue", ::Cysharp::Threading::Tasks::Internal::StatePool_2<T1,T2>*>();
}
template<typename T1,typename T2>
inline ::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>* Cysharp::Threading::Tasks::Internal::StatePool_2<T1,T2>::Create(T1  item1, T2  item2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StatePool_2<T1,T2>*>(),
                        {"Create", {}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>(nullptr, ___internal_method, item1, item2);
}
template<typename T1,typename T2>
inline void Cysharp::Threading::Tasks::Internal::StatePool_2<T1,T2>::Return(::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*  tuple)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StatePool_2<T1,T2>*>(),
                        {"Return", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tuple);
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::Cysharp::Threading::Tasks::Internal::StatePool_2<T1,T2>::StatePool_2()   {
}

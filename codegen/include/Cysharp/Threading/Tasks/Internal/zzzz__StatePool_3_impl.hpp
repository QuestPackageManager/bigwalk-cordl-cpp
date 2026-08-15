#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/StatePool_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StatePool_3_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StateTuple_3_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
template<typename T1,typename T2,typename T3>
inline void Cysharp::Threading::Tasks::Internal::StatePool_3<T1,T2,T3>::setStaticF_queue(::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>*, "queue", ::Cysharp::Threading::Tasks::Internal::StatePool_3<T1,T2,T3>*>(std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>*>(value));
}
template<typename T1,typename T2,typename T3>
inline ::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>* Cysharp::Threading::Tasks::Internal::StatePool_3<T1,T2,T3>::getStaticF_queue()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>*, "queue", ::Cysharp::Threading::Tasks::Internal::StatePool_3<T1,T2,T3>*>();
}
template<typename T1,typename T2,typename T3>
inline ::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>* Cysharp::Threading::Tasks::Internal::StatePool_3<T1,T2,T3>::Create(T1  item1, T2  item2, T3  item3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StatePool_3<T1,T2,T3>*>(),
                        {"Create", {}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>(nullptr, ___internal_method, item1, item2, item3);
}
template<typename T1,typename T2,typename T3>
inline void Cysharp::Threading::Tasks::Internal::StatePool_3<T1,T2,T3>::Return(::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*  tuple)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StatePool_3<T1,T2,T3>*>(),
                        {"Return", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tuple);
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3>
constexpr ::Cysharp::Threading::Tasks::Internal::StatePool_3<T1,T2,T3>::StatePool_3()   {
}

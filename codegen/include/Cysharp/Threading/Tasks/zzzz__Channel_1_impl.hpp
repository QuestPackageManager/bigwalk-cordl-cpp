#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Channel_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Channel_2_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Channel_1_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::Channel_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Channel_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Channel_1<T>* Cysharp::Threading::Tasks::Channel_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Channel_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Channel_1<T>::Channel_1()   {
}

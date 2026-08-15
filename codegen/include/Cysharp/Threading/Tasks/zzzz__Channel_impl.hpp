#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Channel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Channel_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Channel_1_def.hpp"
template<typename T>
inline ::Cysharp::Threading::Tasks::Channel_1<T>* Cysharp::Threading::Tasks::Channel::CreateSingleConsumerUnbounded()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Channel*>(),
                    {"CreateSingleConsumerUnbounded", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Channel_1<T>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Channel::Channel()   {
}

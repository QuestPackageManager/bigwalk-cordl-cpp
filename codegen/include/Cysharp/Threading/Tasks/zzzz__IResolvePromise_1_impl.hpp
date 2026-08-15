#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IResolvePromise_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IResolvePromise_1_def.hpp"
template<typename T>
inline bool Cysharp::Threading::Tasks::IResolvePromise_1<T>::TrySetResult(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IResolvePromise_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}

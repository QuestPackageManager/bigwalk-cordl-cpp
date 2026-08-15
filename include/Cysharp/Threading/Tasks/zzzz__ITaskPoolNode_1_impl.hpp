#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ITaskPoolNode_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
template<typename T>
inline ::by_ref<T> Cysharp::Threading::Tasks::ITaskPoolNode_1<T>::get_NextNode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ITaskPoolNode_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}

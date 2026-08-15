#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation_1.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_1_def.hpp"
template<typename T>
inline ::ArrayW<T> UnityEngine::AsyncInstantiateOperation_1<T>::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AsyncInstantiateOperation_1<T>*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::AsyncInstantiateOperation_1<T>::AsyncInstantiateOperation_1()   {
}

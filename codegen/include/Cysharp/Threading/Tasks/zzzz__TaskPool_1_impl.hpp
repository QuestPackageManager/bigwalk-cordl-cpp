#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TaskPool_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
template<typename T>
inline int32_t Cysharp::Threading::Tasks::TaskPool_1<T>::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskPool_1<T>>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::TaskPool_1<T>::TryPop(::by_ref<T>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskPool_1<T>>(),
                        {"TryPop", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::TaskPool_1<T>::TryPush(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TaskPool_1<T>>(),
                        {"TryPush", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "gate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "root", ty: "T", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::TaskPool_1<T>::TaskPool_1(int32_t  gate, int32_t  size, T  root) noexcept  {
this->gate = gate;
this->size = size;
this->root = root;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::TaskPool_1<T>::TaskPool_1()   {
}

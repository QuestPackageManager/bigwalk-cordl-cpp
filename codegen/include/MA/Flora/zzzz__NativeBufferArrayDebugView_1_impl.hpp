#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferArrayDebugView_1.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferArrayDebugView_1_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
template<typename T>
constexpr ::MA::Flora::NativeBufferArray_1<T>& MA::Flora::NativeBufferArrayDebugView_1<T>::__cordl_internal_get_m_BufferArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferArray;
}
template<typename T>
constexpr ::MA::Flora::NativeBufferArray_1<T> const& MA::Flora::NativeBufferArrayDebugView_1<T>::__cordl_internal_get_m_BufferArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferArray;
}
template<typename T>
constexpr void MA::Flora::NativeBufferArrayDebugView_1<T>::__cordl_internal_set_m_BufferArray(::MA::Flora::NativeBufferArray_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BufferArray = value;
}
template<typename T>
inline void MA::Flora::NativeBufferArrayDebugView_1<T>::_ctor(::MA::Flora::NativeBufferArray_1<T>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArrayDebugView_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::NativeBufferArray_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename T>
inline ::ArrayW<::ArrayW<T>> MA::Flora::NativeBufferArrayDebugView_1<T>::get_Items()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArrayDebugView_1<T>*>(),
                        {"get_Items", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<T>>>(this, ___internal_method);
}
template<typename T>
inline ::MA::Flora::NativeBufferArrayDebugView_1<T>* MA::Flora::NativeBufferArrayDebugView_1<T>::New_ctor(::MA::Flora::NativeBufferArray_1<T>  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::NativeBufferArrayDebugView_1<T>*>(source));
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::NativeBufferArrayDebugView_1<T>::NativeBufferArrayDebugView_1()   {
}

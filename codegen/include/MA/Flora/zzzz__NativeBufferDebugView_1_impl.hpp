#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferDebugView_1.hpp"
#include "MA/Flora/zzzz__NativeBuffer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferDebugView_1_def.hpp"
#include "MA/Flora/zzzz__NativeBuffer_1_def.hpp"
template<typename T>
constexpr ::MA::Flora::NativeBuffer_1<T>& MA::Flora::NativeBufferDebugView_1<T>::__cordl_internal_get_m_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
template<typename T>
constexpr ::MA::Flora::NativeBuffer_1<T> const& MA::Flora::NativeBufferDebugView_1<T>::__cordl_internal_get_m_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
template<typename T>
constexpr void MA::Flora::NativeBufferDebugView_1<T>::__cordl_internal_set_m_Buffer(::MA::Flora::NativeBuffer_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Buffer = value;
}
template<typename T>
inline void MA::Flora::NativeBufferDebugView_1<T>::_ctor(::MA::Flora::NativeBuffer_1<T>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferDebugView_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
template<typename T>
inline ::ArrayW<T> MA::Flora::NativeBufferDebugView_1<T>::get_Items()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferDebugView_1<T>*>(),
                        {"get_Items", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline ::MA::Flora::NativeBufferDebugView_1<T>* MA::Flora::NativeBufferDebugView_1<T>::New_ctor(::MA::Flora::NativeBuffer_1<T>  buffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::NativeBufferDebugView_1<T>*>(buffer));
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::NativeBufferDebugView_1<T>::NativeBufferDebugView_1()   {
}

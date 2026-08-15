#pragma once
// IWYU pragma private; include "MA/Flora/NativeDataReference_1.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__NativeData_1_def.hpp"
template<typename T>
inline void MA::Flora::NativeDataReference_1<T>::_ctor(::MA::Flora::NativeData_1<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeDataReference_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::NativeData_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
template<typename T>
inline bool MA::Flora::NativeDataReference_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeDataReference_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> MA::Flora::NativeDataReference_1<T>::get_ValueRO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeDataReference_1<T>>(),
                        {"get_ValueRO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> MA::Flora::NativeDataReference_1<T>::get_ValueRW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeDataReference_1<T>>(),
                        {"get_ValueRW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template<typename T>
inline T* MA::Flora::NativeDataReference_1<T>::GetUnsafePtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeDataReference_1<T>>(),
                        {"GetUnsafePtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method);
}
template<typename T>
inline ::MA::Flora::NativeDataReference_1<T> MA::Flora::NativeDataReference_1<T>::op_Implicit___MA__Flora__NativeDataReference_1_T_(::MA::Flora::NativeData_1<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeDataReference_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::NativeData_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<T>>(nullptr, ___internal_method, data);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "T*", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::MA::Flora::NativeDataReference_1<T>::NativeDataReference_1(T*  m_Data) noexcept  {
this->m_Data = m_Data;
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::NativeDataReference_1<T>::NativeDataReference_1()   {
}

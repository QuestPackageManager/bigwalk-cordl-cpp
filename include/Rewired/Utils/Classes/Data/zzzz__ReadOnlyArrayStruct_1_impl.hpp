#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/ReadOnlyArrayStruct_1.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ReadOnlyArrayStruct_1_def.hpp"
template<typename T>
inline int32_t Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline T Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline void Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1<T>::_ctor(::ArrayW<T>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters [CppParam { name: "yGHoMKQgEZqcuEQVUwFsxmtuqNpP", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1<T>::ReadOnlyArrayStruct_1(::ArrayW<T>  yGHoMKQgEZqcuEQVUwFsxmtuqNpP) noexcept  {
this->yGHoMKQgEZqcuEQVUwFsxmtuqNpP = yGHoMKQgEZqcuEQVUwFsxmtuqNpP;
}
// Ctor Parameters []
template<typename T>
constexpr ::Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1<T>::ReadOnlyArrayStruct_1()   {
}

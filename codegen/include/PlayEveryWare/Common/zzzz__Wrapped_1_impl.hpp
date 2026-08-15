#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Wrapped_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/Common/zzzz__Wrapped_1_def.hpp"
template<typename T>
constexpr T& PlayEveryWare::Common::Wrapped_1<T>::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
template<typename T>
constexpr T const& PlayEveryWare::Common::Wrapped_1<T>::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
template<typename T>
constexpr void PlayEveryWare::Common::Wrapped_1<T>::__cordl_internal_set__value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
template<typename T>
inline T PlayEveryWare::Common::Wrapped_1<T>::Unwrap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Wrapped_1<T>*>(),
                        {"Unwrap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::Common::Wrapped_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Wrapped_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::PlayEveryWare::Common::Wrapped_1<T>* PlayEveryWare::Common::Wrapped_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::Common::Wrapped_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::PlayEveryWare::Common::Wrapped_1<T>::Wrapped_1()   {
}

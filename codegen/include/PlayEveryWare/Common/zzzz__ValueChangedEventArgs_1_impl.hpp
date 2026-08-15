#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/ValueChangedEventArgs_1.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "PlayEveryWare/Common/zzzz__ValueChangedEventArgs_1_def.hpp"
template<typename TValueType>
constexpr TValueType& PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>::__cordl_internal_get_OldValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OldValue;
}
template<typename TValueType>
constexpr TValueType const& PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>::__cordl_internal_get_OldValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OldValue;
}
template<typename TValueType>
constexpr void PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>::__cordl_internal_set_OldValue(TValueType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OldValue = value;
}
template<typename TValueType>
constexpr TValueType& PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>::__cordl_internal_get_NewValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewValue;
}
template<typename TValueType>
constexpr TValueType const& PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>::__cordl_internal_get_NewValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewValue;
}
template<typename TValueType>
constexpr void PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>::__cordl_internal_set_NewValue(TValueType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NewValue = value;
}
template<typename TValueType>
inline void PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>::_ctor(TValueType  oldValue, TValueType  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>*>(),
                        {".ctor", {}, {::i2c::type_of<TValueType>(), ::i2c::type_of<TValueType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
template<typename TValueType>
inline ::PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>* PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>::New_ctor(TValueType  oldValue, TValueType  newValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>*>(oldValue, newValue));
}
// Ctor Parameters []
template<typename TValueType>
constexpr ::PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>::ValueChangedEventArgs_1()   {
}

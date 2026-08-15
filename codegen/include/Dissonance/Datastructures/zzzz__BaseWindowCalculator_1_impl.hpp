#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/BaseWindowCalculator_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Datastructures/zzzz__BaseWindowCalculator_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__RingBuffer_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename T>
constexpr ::Dissonance::Datastructures::RingBuffer_1<T>*& Dissonance::Datastructures::BaseWindowCalculator_1<T>::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr ::Dissonance::Datastructures::RingBuffer_1<T>* const& Dissonance::Datastructures::BaseWindowCalculator_1<T>::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr void Dissonance::Datastructures::BaseWindowCalculator_1<T>::__cordl_internal_set__buffer(::Dissonance::Datastructures::RingBuffer_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
template<typename T>
inline int32_t Dissonance::Datastructures::BaseWindowCalculator_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::BaseWindowCalculator_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Dissonance::Datastructures::BaseWindowCalculator_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::BaseWindowCalculator_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Datastructures::BaseWindowCalculator_1<T>::_ctor(uint32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::BaseWindowCalculator_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template<typename T>
inline void Dissonance::Datastructures::BaseWindowCalculator_1<T>::Update(T  added)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::BaseWindowCalculator_1<T>*>(),
                        {"Update", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, added);
}
template<typename T>
inline void Dissonance::Datastructures::BaseWindowCalculator_1<T>::Updated(::System::Nullable_1<T>  removed, T  added)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Datastructures::BaseWindowCalculator_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removed, added);
}
template<typename T>
inline void Dissonance::Datastructures::BaseWindowCalculator_1<T>::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Datastructures::BaseWindowCalculator_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Dissonance::Datastructures::BaseWindowCalculator_1<T>* Dissonance::Datastructures::BaseWindowCalculator_1<T>::New_ctor(uint32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Datastructures::BaseWindowCalculator_1<T>*>(size));
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Datastructures::BaseWindowCalculator_1<T>::BaseWindowCalculator_1()   {
}

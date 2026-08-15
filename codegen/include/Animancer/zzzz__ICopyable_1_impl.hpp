#pragma once
// IWYU pragma private; include "Animancer/ICopyable_1.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
template<typename T>
inline void Animancer::ICopyable_1<T>::CopyFrom(T  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ICopyable_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}

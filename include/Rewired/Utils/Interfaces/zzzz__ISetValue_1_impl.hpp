#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/ISetValue_1.hpp"
#include "Rewired/Utils/Interfaces/zzzz__ISetValue_1_def.hpp"
template<typename T>
inline void Rewired::Utils::Interfaces::ISetValue_1<T>::SetValue(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::ISetValue_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}

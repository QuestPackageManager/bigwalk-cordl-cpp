#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IGetValue_1.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IGetValue_1_def.hpp"
template<typename T>
inline T Rewired::Utils::Interfaces::IGetValue_1<T>::GetValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IGetValue_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}

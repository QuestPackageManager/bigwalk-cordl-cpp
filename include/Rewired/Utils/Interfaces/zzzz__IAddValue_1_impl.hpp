#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IAddValue_1.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IAddValue_1_def.hpp"
template<typename TValue>
inline void Rewired::Utils::Interfaces::IAddValue_1<TValue>::Add(TValue  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IAddValue_1<TValue>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}

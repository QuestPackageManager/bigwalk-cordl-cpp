#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IAddKeyValue_2.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IAddKeyValue_2_def.hpp"
template<typename TKey,typename TValue>
inline void Rewired::Utils::Interfaces::IAddKeyValue_2<TKey,TValue>::Add(TKey  key, TValue  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IAddKeyValue_2<TKey,TValue>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
